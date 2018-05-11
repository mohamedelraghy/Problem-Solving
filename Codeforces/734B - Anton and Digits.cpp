#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	
	int By256 = min(k2 ,min(k5 , k6));
	k2 -= By256;
	int By32 = min(k2, k3);
	
	cout << (By256 * 256) + (By32 * 32) << endl;  
}
