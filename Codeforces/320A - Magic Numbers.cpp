#include<bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	if(s[0] != '1') {
		cout << "NO" << endl;
		return 0;
	}
	
	for(unsigned int i = 0; i < s.size(); i++) {
		if(s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') i += 	2;
		else if(s[i] == '1' && s[i + 1] == '4') i++;
		else if(s[i] == '1') continue;
		else {
			cout << "NO" << endl;
			return 0;
		}
	}
	
	cout << "YES" << endl; 
}
