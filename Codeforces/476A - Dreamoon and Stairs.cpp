#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int n, m;
	cin >> n >> m;
	
	int res = ceil(n / 2.0);
	
	for(res; res <= n; res++){
		if(res % m == 0){
			cout << res << endl;
			return 0;
		}
	}

	cout << -1 << endl;	
}
