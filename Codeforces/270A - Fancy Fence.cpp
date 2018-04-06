#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	short int test, r;
	cin >> test;
	
	while(test--){
		cin >> r;
		if(360 % (180 - r) == 0) cout << "YES\n";
		else cout << "NO\n";
	}
}
