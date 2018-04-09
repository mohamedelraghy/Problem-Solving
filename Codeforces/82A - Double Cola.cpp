#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	ll n, itr = 1;
	cin >> n;
	
	while(itr * 5 < n){	
		n -= itr * 5;
		itr *= 2;
	}
	
	n = (n - 1) / itr;
	
	cout << s[n] << endl;
}
