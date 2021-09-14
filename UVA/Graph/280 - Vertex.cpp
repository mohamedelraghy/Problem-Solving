#include<bits/stdc++.h>
using namespace std;

#define f first
#define sz(x) (int)x.size()

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi vis;
vector <vii> AdjList;

void dfs(int u){
    
    for(int i = 0; i < sz(AdjList[u]); i++){
        ii v = AdjList[u][i];
        if(!vis[v.f]) {
            vis[v.f] = true;
            dfs(v.f);
        }
    }
}

int main(){

    int n; 
    while(cin >> n && n){
        AdjList.assign(n + 1, vii());
        vis.assign(n + 1, false);
        
        int u, v;
        while(cin >> u && u){
            while(cin >> v && v){
                AdjList[u].push_back(ii(v, 0));
            }      
        }

        int inv, start; cin >> inv;

        while(inv--){
            cin >> start;
            dfs(start);

            int cnt = 0;
            for(int i = 1; i <= n; i++) {
                if(!vis[i]){
                    cnt++;
                    
                }
            }
            cout << cnt;
            for(int i = 1; i <= n; i++) {
                if(!vis[i]){
                    cout << " " << i;
                }
            }
            cout << "\n";   
        }
        
        vis.clear();
        AdjList.clear();
    }
}