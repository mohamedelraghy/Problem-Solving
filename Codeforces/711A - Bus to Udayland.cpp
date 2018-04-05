#include<bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	bool flag = false;	
	int testCase;
	string s;
	vs vec;
	cin >> testCase;
	for(int i = 0; i < testCase; i++){
		cin >> s;
		for(int j = 0; j < s.size(); j++){
			if(!flag && s[j] == 'O' && s[j + 1] == 'O'){
				s[j] = s[j + 1] = '+';
				flag = true;
			}	
		}
		
		vec.push_back(s);
	}
	
	if(flag){
		cout << "YES\n";
		for(string &i : vec) cout << i << endl; 
	
	}else cout << "NO\n";
}
