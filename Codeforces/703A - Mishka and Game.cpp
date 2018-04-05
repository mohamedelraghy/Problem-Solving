#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, mCount = 0, cCount = 0, m, c;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> m >> c;
		
		if(m > c) mCount++;
		else if(m < c) cCount++;
	}
		
	if(mCount > cCount) cout << "Mishka\n";
	else if(mCount < cCount) cout << "Chris\n";
	else cout << "Friendship is magic!^^\n";
}
