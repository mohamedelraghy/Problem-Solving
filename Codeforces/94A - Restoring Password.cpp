#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	map<string, int>mp;

	cin >> s;

	for(int i = 0; i < 10; i++){
		string code;
		cin >> code;
		mp[code] = i;
	}

	for(int i = 0; i < 8; i++) {
		string sub = s.substr(i * 10, 10);
		cout << mp[sub];
	}
	
	cout << "\n";
}
