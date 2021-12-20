#include<bits/stdc++.h>
using namespace std;

int grid[105][105];
bool visited[105][105];
pair<int, int> bfs(int, int, int, int);

int main(){
    int T, r, c, m, n, w, x, y;
    cin >> T;
    for(int t = 1; t <= T; t++){
		cin >> r >> c >> m >> n;
		cin >> w;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				grid[i][j] = 0;
				visited[i][j] = false;
			}
		}
		
		while(w--){
			cin >> x >> y;
			grid[x][y] = -1;
		}
		
		pair<int, int> ans = bfs(r, c, m, n);
		cout << "Case " << t << ": " << ans.first << " " << ans.second << "\n";
	}
}

pair<int, int> bfs(int r, int c, int m, int n){
	int dr[8] = {m, m, -m, -m, n, -n, n, -n};
	int dc[8] = {n, -n, n, -n, m, m, -m, -m};
	
	queue< pair<int, int> > q;
	q.push(make_pair(0 ,0));
	visited[0][0] = true;
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();
		set<pair<int, int>> adj;
		for(int i = 0; i < 8; i++){
			int x = dr[i] + p.first;
			int y = dc[i] + p.second;
			
			if(x >= 0 && x < r && y >= 0 && y < c && grid[x][y] != -1) adj.insert(make_pair(x, y));
		}
		
		for(auto i : adj){
			grid[i.first][i.second]++;
			if(!visited[i.first][i.second]){
				visited[i.first][i.second] = true;
				q.push(make_pair(i.first, i.second));
				
			}
		}
	}
	
	int even, odd;
	even = odd = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if((grid[i][j] != -1 && grid[i][j] != 0) || (i == 0 && j == 0)){
				if(grid[i][j] & 1) odd++;
				else even++; 
			}
		}
	}
	
	return make_pair(even, odd);
}
