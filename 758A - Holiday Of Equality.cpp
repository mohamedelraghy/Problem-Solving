#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vi vec;
	int test;
	cin >> test;
	
	while(test--){
		int val;
		cin >> val;
		vec.push_back(val);
	}
	
	sort(vec.begin(), vec.end(), greater<int>());
	
	int max = vec[0], sum = 0;
	
	for(int &i : vec) sum += (max - i);
	
	cout << sum << endl;
}
