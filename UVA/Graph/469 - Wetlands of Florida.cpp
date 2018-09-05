#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

typedef vector<string> vs;
vs grid;
bool visted[105][105];

int di[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dj[] = {0, 1, 1, 1, 0, -1, -1, -1};

int floodfill(int i, int j, char c1);

int main(){
    
	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
          
    int tc, i , j, ans = 0;
	string str;
    cin >> tc;
    
    getline(cin, str);
    getline(cin, str);
    	
     while(tc--){
		grid.clear();
		while(getline(cin, str)){
			if(str[0] != 'W' && str[0] != 'L' && !str.empty()){
				istringstream is(str);
				is >> i >> j;
				
				ans = floodfill(i - 1, j - 1, 'W');
				for(int i = 0; i < grid.size(); i++){
					for(int j = 0; j < grid[0].size(); j++){
						visted[i][j] = 0;
					}
				}
				cout << ans << endl;
			}
			else if(str.empty()) break;
			else grid.push_back(str);
		}
			
		if(tc) cout << endl;
	}
}   

int floodfill(int i, int j, char c1){
	
	if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) return 0;
	if(visted[i][j] || grid[i][j] != c1) return 0;
	
	visted[i][j] = true;
	int ans = 1;
	
	for(int k = 0; k < 8; k++) ans += floodfill(i + di[k], j + dj[k], c1);
	
	return ans;
}	
