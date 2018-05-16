#include<bits/stdc++.h>
using namespace std;

int main() {
		
	ios_base::sync_with_stdio(false)
	cin.tie(NULL);
	
	string s;
	cin >> s;
	int count(0), max(0);
	
	for(unsigned int i = 0; i < s.size(); i++) {
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') count = 0;
		else count++;
		
		if(count > max) max = count;
	}	
	
	cout << ++max << endl;	
}
