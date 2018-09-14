#include<bits/stdc++.h>
using namespace std;

vector<int> graph, sum;
vector<bool> vis;

int dfs(int u){
	vis[u] = true;
	int total = 0;
	if(graph[u] != -1 && !vis[graph[u]])
		total += 1 + dfs(graph[u]);
	vis[u] = false;
	return sum[u] = total;
} 


int main(){
	
	int T, n, u, v;
	cin >> T;
	for(int t = 1; t <= T; t++){
		cin >> n;
		graph.assign(n + 1, -1);
		sum.assign(n + 1, -1);
		vis.assign(n + 1, false);
		for(int i = 0; i < n; i++){
			cin >> u >> v;
			graph[u] = v;
		}
		
		int ans = 0, cmp = 0;
		for(int i = 1; i <= n; i++){
			if(sum[i] == -1) dfs(i);
			if(sum[i] > cmp)
				cmp = sum[i], ans = i;
		}
		
		printf("Case %d: %d\n", t, ans);
	}
}
