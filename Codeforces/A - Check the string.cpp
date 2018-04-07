#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	int counta, countb, countc;
	counta = countb = countc = 0;

	
	for(int i = 0; i < s.size(); i++){
		
		if(s[i] == 'a') counta++;
		else if(s[i] == 'b') countb++;
		else countc++;
		
		if(i && s[i] < s[i - 1]) {
			cout << "NO\n";
			return 0;
		}
	}  
	
	if(!counta || !countb || !countc) cout << "NO\n";	
	else if(counta == countc || countb == countc || (counta == countc && countc == countb)) cout << "YES\n";
	else cout << "NO\n";
}
