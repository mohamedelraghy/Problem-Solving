#include<bits/stdc++.h>
using namespace std;


int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, dif, same;
	cin >> a >> b;
	
	dif = min(a, b);
	same = max(a, b);
	same -= dif;
	
	cout << dif << " " << same / 2 << endl;	
}
