#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	double pro = 0;
	cin >> n;
	vec v(n);
	
	for(int i = 0; i < n; i++){
		 cin >> v[i];
		 pro += (v[i] / 100.0);
	}
	
	printf("%.12f\n", (pro / n) * 100); 
}
