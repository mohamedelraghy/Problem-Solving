#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	
	int n;
	cin >> n;
	vi id, rank;
	for(int i = 0; i < n; i++){
		int a, b, c, d, sum = 0;
		cin >> a >> b >> c >> d;
		id.push_back(a + b + c + d);
	}
	
	rank = id;
	sort(rank.rbegin(), rank.rend());
	
	for(int i = 0; i < n; i++) 
		if(id[0] == rank[i]){
			cout << i + 1 << endl;
			return 0;
		}
}
