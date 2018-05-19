#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	if(n == 3) {
		cout << 2 << endl;
		cout << "1 3" << endl;
		return 0;
	}
	
	if(n == 4) {
		cout << 4 << endl;
		cout << "3 1 4 2" << endl;
		return 0;
	}
	
	if(n == 2){
		cout << "1\n1\n";
		return 0;
	}
	
	cout << n << endl;
	
	if(n & 1) {
		for(int i = 0; i < ceil(n / 2.0); i++) cout << (2 * i) + 1 << " ";
		for(int i = 1; i <= n / 2; i++) cout << 2 * i << " ";
		cout << endl; 
	} else {
		for(int i = 0; i < n / 2; i++) cout << (2 * i) + 1 << " ";
		for(int i = 1; i <= n / 2; i++) cout << 2 * i << " ";
	}
}
