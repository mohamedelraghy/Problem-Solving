#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k, count = 0;
	cin >> n >> k;
	vi vec (n);
	
	for(int i = 0; i < n; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	
	for(int i = 2, j = 0; j < n / 3; i += 3, j++){
		if(vec[i] + k > 5){
			cout << count << endl;
			return 0;
		}
		count++;
	}
	
	cout << count << endl;
}
