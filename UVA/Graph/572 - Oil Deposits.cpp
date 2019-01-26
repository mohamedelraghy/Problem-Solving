#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<ii> vii;

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

int m = 1, n;
char grid[101][101];
int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};

void floodfill(int r, int c, char c1, char c2);

int main(){
    
    ios_base::sync_with_stdio(0); cin.tie(0);
	
	while(m != 0){
		cin >> m >> n;
		if (!m) break;
		
		int ans = 0;
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				cin >> grid[i][j];
		
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(grid[i][j] == '@'){
					ans++;
					floodfill(i, j, '@', '*');
				}
			}
		}
		cout << ans << endl;
	}
	
}


void floodfill(int r, int c, char c1, char c2){

	if(r > m || r < 0 || c > n || c < 0) return;
	if(grid[r][c] != c1) return;
	
	grid[r][c] = c2;
	for(int i = 0; i < 8; i++) floodfill(r + dr[i], c + dc[i], c1, c2);
}
