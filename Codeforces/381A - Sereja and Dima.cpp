#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, Ssum = 0, Dsum = 0;
	cin >> n;
	vi vec(n);
	
	for(int i = 0; i < n; i++) cin >> vec[i];
	
	for(int i = 0; i < n; i++) {
		if(!(i & 1)) {
			if(vec.front() > vec.back()){
				Ssum += vec.front();
				vec.erase(vec.begin());
			}else {
				Ssum += vec.back();
				vec.pop_back();
			}
		} else {
			if(vec.front() > vec.back()){
				Dsum += vec.front();
				vec.erase(vec.begin());
			}else {
				Dsum += vec.back();
				vec.pop_back();
			}	
		}
	}
	
	cout << Ssum << " " << Dsum << endl; 
}
