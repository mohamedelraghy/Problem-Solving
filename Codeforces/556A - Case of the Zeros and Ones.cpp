#include<bits/stdc++.h>
using namespace std;

int main(){
		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, count1(0), count0(0);
	cin >> n;
	string s;
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1') count1++;
		else count0++;
	}
	
	cout << max(count1, count0) - min(count1, count0) << endl;
}
