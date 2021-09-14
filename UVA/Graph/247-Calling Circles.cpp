#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define sz(x) (int)x.size()
#define UNVISITED 0
#define VISITED 1

vector<vii> AdjList;
vi dfs_num, dfs_low, S, visited;
int dfsNumberCounter;

map<int, string> name;
map<string, int> ind;

void tarjanSCC(int u)
{
    dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
    S.push_back(u);
    visited[u] = 1;
    for (int i = 0; i < sz(AdjList[u]); i++)
    {
        ii v = AdjList[u][i];
        if (dfs_num[v.first] == UNVISITED)
            tarjanSCC(v.first);

        if (visited[v.first])
            dfs_low[u] = min(dfs_low[u], dfs_low[v.first]);
    }
    if (dfs_low[u] == dfs_num[u])
    {
        int i = 0;
        while (true)
        {
            int v = S.back();
            S.pop_back();
            visited[v] = 0;
            if (i)
                printf(", ");
            cout << name[v];
            if (u == v)
                break;
            i++;
        }
        printf("\n");
    }
}

int main()
{
    int n, m;
    int tc = 1;
    bool newLine = false;
    while (cin >> n >> m && n)
    {
        if (newLine)
            cout << endl;
        newLine = true;
        dfs_num.assign(n + 1, UNVISITED);
        dfs_low.assign(n + 1, 0);
        visited.assign(n + 1, 0);
        dfsNumberCounter = 0;
        AdjList.assign(n + 1, vii());

        string u, v;
        int newInd = 1;
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            if (ind[u] == 0)
            {
                ind[u] = newInd;
                name[newInd] = u;
                newInd++;
            }
            if (ind[v] == 0)
            {
                ind[v] = newInd;
                name[newInd] = v;
                newInd++;
            }

            AdjList[ind[u]].push_back(ii(ind[v], 0));
        }

        printf("Calling circles for data set %d:\n", tc++);
        for (int i = 1; i < n; i++)
            if (!dfs_num[i])
                tarjanSCC(i);

        dfs_num.clear();
        dfs_low.clear();
        visited.clear();
        AdjList.clear();
        ind.clear();
        name.clear();
    }
}