#include<bits/stdc++.h>
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, res = 0;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	
	for(int i = 0; i < n; i++) res += min(abs((s1[i] - '0') - (s2[i] - '0')), abs(10 - abs((s1[i] - '0') - (s2[i] - '0'))));
	
	cout << res << endl;
}
