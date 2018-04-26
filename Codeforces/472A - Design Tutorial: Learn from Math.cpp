#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	if(n % 2 == 0) cout << 8 << " " << n - 8 << endl;
	else cout << 9 << " " << n - 9 << endl;	
}
