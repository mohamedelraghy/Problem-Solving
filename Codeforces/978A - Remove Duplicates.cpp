#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vec v1(n), v2;
	
	for(int i = 0; i < n; i++) cin >> v1[i];
		
	for(int i = (n - 1); i >= 0; i--)
		if(find(v2.begin(), v2.end(), v1[i]) == v2.end()) v2.push_back(v1[i]);
	
	reverse(v2.begin(), v2.end());
	
	cout << v2.size() << endl;
	for(auto i : v2) cout << i << " ";
}
