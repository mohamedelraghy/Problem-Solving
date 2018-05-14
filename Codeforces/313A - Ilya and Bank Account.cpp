#include<bits/stdc++.h>
using namespace std;

int BeforLastDigit(long long num);

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);				
	
	long long n;
	cin >> n;
	if(n > 0) {
		cout << n << endl;
		return 0;
	}else {
		if((abs(n) % 10) > BeforLastDigit(abs(n))) cout << n / 10 << endl;
		else {
			int Last = n % 10;
			n /= 100;
			n *= 10;
			n += Last;
			cout << n << endl;
		}
	}
}


int BeforLastDigit(long long num) {
		
	num /= 10;
	return num % 10;
}
