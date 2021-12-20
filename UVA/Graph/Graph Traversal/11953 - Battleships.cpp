#include<bits/stdc++.h>
using namespace std;

int N;
char grid[101][101];

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, -1, 0, 1};


void floodfill(int r, int c, char c1, char c2, char c3){
    if(r < 0 || r >= N || c < 0 || c >= N) return;
    if(grid[r][c] != c1 && grid[r][c] != c2) return; 
    grid[r][c] = c3;
    for(int i = 0 ; i <= 3; i++) floodfill(r + dr[i], c + dc[i], c1, c2, c3);
}

int main(){

    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> N;
        for(int j = 0; j < N; j++) scanf("%s", grid[j]);

        int cnt = 0;
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                if(grid[j][k] == 'x') cnt++, floodfill(j, k, 'x', '@', '.');
            }
        }

        printf("Case %d: %d\n", i, cnt);

    }
}