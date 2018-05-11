#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vi;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k, count = 0;
	cin >> n >> k;
	vi vec(n);
	long long ans = 0;
	
	for(int i = 0; i < n; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	
	if(k == 0) ans = vec[0] - 1;
	else ans = vec[k - 1];
	//cout << ans << endl;
	for(int i = 0; i < n; i++){
		if(ans >= vec[i]) count++;
	}
	//cout << count << endl;
	if(count != k || !(ans >= 1 && ans <= 1000000000)) cout << -1 << endl;
	else cout << ans << endl;
}
