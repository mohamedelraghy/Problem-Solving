#include<bits/stdc++.h>
using namespace std;

int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1};

int R, C;

char grid[25][25];

void floodfill(int r, int c, char c1, char c2){
	
	if(r < 0 || r >= R || c < 0 || c >= C) return;
	if(grid[r][c] != c1) return;
	grid[r][c] = c2;
	for(int i = 0; i < 8; i++){
		floodfill(r + dr[i], c + dc[i], c1, c2);
	}
}


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, picNum = 1;
	while(cin >> n){
		int ans = 0;
		R = C = n;
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				cin >> grid[i][j];
			}
		}
		
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				if(grid[i][j] == '1') {
					floodfill(i, j, '1', '0');
					ans++;
				}
			}
		}
		
		cout << "Image number "<< picNum++ << " contains "<< ans << " war eagles." << endl;
	}
}
