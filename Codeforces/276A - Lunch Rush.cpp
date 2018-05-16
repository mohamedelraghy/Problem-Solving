#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	ll k, f, t, res(0), max = INT_MIN;
	cin >> k;
	
	for(int i = 0; i < n; i++){
		cin >> f >> t;
		
		if(t > k) res = f - (t - k);
		else res = f;
		
		if(res > max) max = res;
	}
	
	cout << max << endl;	
}
