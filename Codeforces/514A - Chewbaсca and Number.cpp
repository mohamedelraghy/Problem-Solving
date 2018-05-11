#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	for(unsigned int i = 0; i < s.size(); i++){
		if(s[0] == '9' && i == 0) cout << s[0];
		else {
			int MIN = s[i] - '0';
			MIN = min(MIN, 9 - MIN);
			cout << MIN; 
		}
	}	
	cout << endl;
