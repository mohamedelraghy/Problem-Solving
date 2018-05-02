#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int M = max((3 * a) / 10, a - (a / 250) * c);
	int V = max((3 * b) / 10, b - (b / 250) * d);
	
	if(M > V) cout << "Misha" << endl;
	else if(M < V) cout << "Vasya" << endl;
	else cout << "Tie" << endl;
}
