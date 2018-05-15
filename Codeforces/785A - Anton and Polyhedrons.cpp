#include<bits/stdc++.h>
using namespace std;

typedef map<string , int> Map;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	long long sum(0);
	cin >> n;
	Map m;
	m["Tetrahedron"] = 4;
	m["Cube"] = 6;
	m["Octahedron"] = 8;
	m["Dodecahedron"] = 12;
	m["Icosahedron"] = 20;
	
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		sum += m[s];
	}
	
	cout << sum << endl;	
}
