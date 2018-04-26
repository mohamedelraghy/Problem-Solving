#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, a = 1;
	long long res = 0;	
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		int b;
		cin >> b;
		if(b >= a)
			res += (b - a);
		else 
			res += (n - (a - b));
		
		a = b;
	}
	cout << res << endl;
}
