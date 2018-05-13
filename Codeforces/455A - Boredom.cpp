#include<bits/stdc++.h>
using namespace std;

int main() {
		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	long long count[100005], dp[100005];
	
	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		count[val]++;
	}
	dp[0] = 0;
	dp[1] = count[1];
	
	for(int i = 2; i < 100005; i++) dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i);
	
	cout << dp[100004] << endl;
	
}
