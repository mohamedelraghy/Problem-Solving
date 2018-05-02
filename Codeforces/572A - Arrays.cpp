#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int nA, nB, k, m;
	cin >> nA >> nB >> k >> m;
	vi A(nA), B(nB);
	
	for(int i = 0; i < nA; i++) cin >> A[i];
	for(int i = 0; i < nB; i++) cin >> B[i];
	
	if(A[k - 1] < B[nB - m]) cout << "YES" << endl;
	else cout << "NO" << endl;
}
