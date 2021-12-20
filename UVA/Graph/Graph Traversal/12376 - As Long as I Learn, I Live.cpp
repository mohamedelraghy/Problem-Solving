#include<bits/stdc++.h>
using namespace std;
#define f first
#define sz(x) (int)x.size()

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi learns;
vector<vii> AdjList; 
int last_node, ans(0);

void dfs(int u){

    int next_node = -1;
    int _max = INT_MIN;
    ans += learns[u];
    for(int i = 0; i < sz(AdjList[u]); i++){
        ii v = AdjList[u][i];
        if(learns[v.f] > _max){
            _max = learns[v.f];
            next_node = v.f;
        }
    }

    if(next_node == -1) last_node = u;
    else dfs(next_node);

}

int main(){
    int tc, i = 1;
    cin >> tc;
    while(tc--){
        int n, m;
        cin >> n >> m;
        AdjList.assign(n, vii());
        learns.assign(n, 0);
        for(int i = 0; i < n; i++) cin >> learns[i];
        int u, v;
        while(m--){
            cin >> u >> v;
            AdjList[u].push_back(ii(v, 0));
        }

        ans = 0;
        dfs(0);
        printf("Case %d: %d %d\n", i++, ans, last_node);
    }
    
}