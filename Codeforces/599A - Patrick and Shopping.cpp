#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vll vec;
	ll val;
	
	for(int i = 0; i < 3; i++){
		cin >> val;
		vec.push_back(val);
	}
	
	sort(vec.begin(), vec.end());
	
	if(vec[0] == vec[1] && vec[1] == vec[2]){
		cout << vec[0] * 3 << endl;
		return 0;
	}
	
	if((vec[0] + vec[1] + vec[2]) > ((vec[0] * 2) + (vec[1] * 2))) cout << (vec[0] * 2) + (vec[1] * 2) << endl;
	else cout << vec[0] + vec[1] + vec[2] << endl;
}
