#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef pair<int ,int> ii;

int N, M;
char grid[21][21];

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, -1, 0, 1};

int floodfill(int r, int c, char c1, char c2){
    if(r < 0 || r >= N || c < 0 || c >= M) return 0;
    if(grid[r][c] != c1) return 0;

    int ans = 1;
    
    if((c == 0 && grid[r][c] == c1 && grid[r][M - 1] == c1)) {
        grid[r][c] = c2;
        ans += floodfill(r, M - 1, c1, c2);
    }

    if((c == M - 1 && grid[r][c] == c1 && grid[r][0] == c1)){
        grid[r][M - 1] = c2;
        ans += floodfill(r, 0, c1, c2);
    }

    grid[r][c] = c2;
    for(int i = 0; i <= 4; i++)
        ans += floodfill(r + dr[i], c + dc[i], c1, c2); 

    return ans;   
}

int main(){
    while(cin >> N >> M){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> grid[i][j];
            }
        }

        ii kingPos;
        cin >> kingPos.f >> kingPos.s;
        char kingChar = grid[kingPos.f][kingPos.s];

        floodfill(kingPos.f, kingPos.s, kingChar, ' ');

        int ans = 0;
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(grid[i][j] == kingChar){
                    int cnt = floodfill(i, j, kingChar, ' ');
                    if(cnt > ans) ans = cnt;
                }
            }
        }

        cout << ans << endl;
    }
}