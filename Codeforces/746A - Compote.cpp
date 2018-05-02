#include<bits/stdc++.h>
using namespace std;

int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c;
	cin >> a >> b >> c;
	int q = min(a, min((b / 2), (c / 4)));
	cout << q * 1 + q * 2 + q * 4 << endl;
}
