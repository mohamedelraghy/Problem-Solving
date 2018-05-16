#include <bits/stdc++.h>
using namespace std;

int main() {
		
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m, a, pos(0), max(0);
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++) {
		cin >> a;
		if(ceil(a / double(m)) >= max){
			max = ceil(a / double(m));
			pos = i;
		}
	}
	
	cout << pos << endl;
}
