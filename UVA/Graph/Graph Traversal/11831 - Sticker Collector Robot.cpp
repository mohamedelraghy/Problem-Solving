#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n, m, s, orientation = 0;
   while(true){
		cin >> n >> m >> s;
		if(!n && !m && !s) break;
		char arena[n][m];
		int x, y, u, v;
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> arena[i][j];
				if(arena[i][j] == 'N' || arena[i][j] == 'L' || arena[i][j] == 'S' || arena[i][j] == 'O'){
					 x = i;
					 y = j;
				}	 
			}
		}
				
		if(arena[x][y] == 'N') orientation = 0;
		else if(arena[x][y] == 'L') orientation = 1;
		else if(arena[x][y] == 'S') orientation = 2;
		else orientation = 3;
		
		string instractions;
		cin >> instractions;
		int count = 0;
		
		for(int i = 0; i < s; i++){
			if(instractions[i] == 'D') orientation = (orientation + 1) % 4;
			else if(instractions[i] == 'E'){
				orientation = orientation - 1;
				if(orientation < 0) orientation = 3;
			}
			
					
			else{
				u = x, v = y;
						
				if(orientation == 0) u--;
				else if(orientation == 1) v++;
				else if(orientation == 2) u++;
				else v--;
				if(u < 0 || u >= n || v < 0 || v >= m || arena[u][v] == '#') continue;
				else{
					if(arena[u][v] == '*') count++;
					arena[u][v] = '.';
					x = u;
					y = v;
				}
			}
		}

		cout << count << endl;
   }
}
