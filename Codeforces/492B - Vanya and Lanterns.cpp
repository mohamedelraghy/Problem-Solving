#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vll;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	long long l;
	cin >> n >> l;
	vll vec(n);
	for(int i = 0; i < n; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	
	long long res = max(vec[0], l - vec[n - 1]) * 2;
	
	for(int i = 1; i < n; i++) res = max(res, vec[i] -  vec[i -1]);
	
	printf("%.10f", res / 2.0);
}
