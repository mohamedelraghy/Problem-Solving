#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define sz(x) (int)x.size()

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vii> AdjList;
vi vis;

void make_edge(int u, int v){
    AdjList[u].push_back(ii(v, 0));
    AdjList[v].push_back(ii(u, 0));
}

void dfs(int u){

    vis[u] = true;
    for(int i = 0; i < sz(AdjList[u]); i++){
        ii v = AdjList[u][i];
        if(!vis[v.f]) {
            vis[v.f] = true;
            dfs(v.f);
        }
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        string s;
        AdjList.assign(27, vii());
        vis.assign(27, false);
        while(cin >> s && s[0] == '('){
            make_edge(s[1] - 'A', s[3] - 'A');
        }
        cin >> s;
        vi points;
        
        for(int i = 0; i < sz(s); i += 2){
            points.push_back(s[i] - 'A');
        }

        int countTree = 0, countAcrons = 0;
     
        for(auto i : points){
            if(!vis[i]){
                if(sz(AdjList[i]) == 0) countAcrons++;
                else countTree++;
                dfs(i);
            }
        }

        printf("There are %d tree(s) and %d acorn(s).\n", countTree, countAcrons);
        
        AdjList.clear();
        vis.clear();


    }   
}