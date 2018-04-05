#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int test, count = 1;
	string s;
	char c;
	cin >> test;
	
	for(int i = 0; i < test; i++){
		
		cin >> s;
		if(i)
			if(c == s[0]) count++;
			
		c = s[1];
	}
	
	cout << count << endl;
}
