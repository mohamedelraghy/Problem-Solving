#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vec;

int main() {
   
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
   
	int n;
	cin >> n;
   
	vec v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
   
	sort(v.begin(), v.end());

	cout << v[(n & 1) ? n / 2 : (n / 2) - 1] << endl;
}
