#include <bits/stdc++.h>

using namespace std ;

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n ;
	cin >> n;
	
	for (int i = 0 ; i < n ; i++){
		int size ;
		cin >> size ;
		vector<int> vec;
		
		for (int j =0 ; j < size ; j++){
			int val;
			cin >> val;
			vec.push_back(val);		
		}

		sort(vec.begin() , vec.end());
		 
		for (int i = 0; i < vec.size(); i++){
			if(i) cout << " ";
			cout << vec[i];
		}
		cout << "\n";
		vec.clear();
	
  }
}
