#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int NumOfDigits(ll n);

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll n, sub = 1;
	cin >> n;
	int NumOfDigit = NumOfDigits(n);
	
	ll res = (n * NumOfDigit) + (NumOfDigit - 1);
	
	for(int i = 0; i < NumOfDigit - 1; i++){
		sub *= 10;
		res -= sub;
	}
	
	cout << res << endl;
}

int NumOfDigits(ll n){
	int num = 0;	
	while(n){
		n /= 10;
		num++;
	}
	
	return num;
}
