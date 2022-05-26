#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	bool l = false, r = true;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i % 2 == 1) cout << '#';
			else{
				if(r && j == m) cout << '#'; 
				else if(l && j == 1) cout << '#';
				else cout << '.';
			}
		}
		if(i % 2 == 0){
			l = !l;
			r = !r;
		}	
			
		cout << "\n";
	}	
}
