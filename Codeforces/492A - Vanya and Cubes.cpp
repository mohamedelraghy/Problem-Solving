#include<bits/stdc++.h>
using namespace std;


int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sum = 1, i, n, bigSum = 1;
	cin >> n;
	
	for(i = 2; bigSum <= n; i++){
		
		sum += i;
		bigSum += sum;
	}
	cout << i - 2 << endl;
}
