#include<bits/stdc++.h>
using namespace std;

#define pb push_back 
#define f first
#define sz(x) (int)x.size()
#define VISITED 1
#define UNVISITED 0

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> AdjList;
vi vis, topo;

void make_edge(int u, int v){
    AdjList[u].pb(ii(v, 0));

}

void dfs(int s){
    vis[s] = true;
    for(int i = 0; i < sz(AdjList[s]); i++){
        ii v = AdjList[s][i];
        if(!vis[v.f]) dfs(v.f);
    }

    topo.pb(s);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while(cin >> n >> m && n){
        AdjList.assign(n + 1, vii());
        vis.assign(n + 1, false);
        topo.clear();

        int u, v;
        while(m--){
            cin >> u >> v;
            make_edge(u, v);
        }

        for(int i = 1; i <= n; i++){
            if(!vis[i]) dfs(i);
        }
        
        for(int i = sz(topo) - 1; i >= 0; i--) {
            cout << topo[i];
            if(i) cout << " ";
            
        }
        cout << endl;
        
    }
    

}