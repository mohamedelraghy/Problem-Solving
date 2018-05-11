#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	int link, pearl;
	link = pearl = 0;
	
	for(unsigned int i = 0; i < s.size(); i++){
		if(s[i] == 'o') pearl++;
		else link++;
	}
	
	if(!pearl) {
		cout << "YES" << endl;
		return 0;
	}
	
	if(!(link % pearl)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
