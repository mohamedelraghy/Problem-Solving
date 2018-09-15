#include<bits/stdc++.h>
using namespace std;

int main(){
		
	long long arr[4] = {0};
	char num1[4] = {'0', '0', '1', '1'};
	char num2[4] = {'0', '1', '0', '1'};
	
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 4; j++){
			if(num1[j] == a[i] && num2[j] == b[i]) arr[j]++;
		}
	}
	
	cout << (arr[0] * arr[2]) + (arr[0] * arr[3]) + (arr[1] * arr[2]) << endl;
}
