#include<bits/stdc++.h>
using namespace std;

int last(long long n){		
	return n % 10;
}

int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n;
	cin >> n;
	int k; 
	cin >> k;
	
	for(int i = 0; i < k; i++){
		if(!last(n)) n /= 10;
		else n -= 1;
	}
	
	cout << n << endl;
}
