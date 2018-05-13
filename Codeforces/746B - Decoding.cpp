#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	vc vec;
	vec.push_back(s[0]);
	
	for(int i = n - 1, j = 1; i > 0; i--, j++) {
		if(!(i&1)) vec.insert(vec.begin(), s[j]);
		else vec.push_back(s[j]);
	}
	
	for(auto i : vec) cout << i;
	cout << endl;
}
