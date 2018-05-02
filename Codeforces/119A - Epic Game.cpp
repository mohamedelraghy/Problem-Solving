#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ return b == 0 ? a : gcd(b, a %b ); }

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, n;
	cin >> a >> b >> n;
	
	if(a == 1 && b == 1 && n % 2 == 0){
		cout << 1 << endl;
		return 0;
	} 
	else if(a == 1 && b == 1 && n % 2 == 1){
		cout << 0 << endl;
		return 0;
	}
	
	int arr[2] = {a, b};
	int i = 0;
	
	while(n > 0){
		n -= gcd(arr[i], n);
		if(i == 0) i += 1;
		else i -= 1;	
	}
	
	if(i) cout << 0 << endl;
	else cout << 1 << endl;
}
