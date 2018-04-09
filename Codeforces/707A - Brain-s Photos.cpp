#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	char c;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> c;
			if(c == 'C' || c == 'M' || c == 'Y'){
				cout << "#Color\n";
				return 0; 
			}
		}
	}
	
	cout  << "#Black&White\n";
}
