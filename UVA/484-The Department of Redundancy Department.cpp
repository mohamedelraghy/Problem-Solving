#include <bits/stdc++.h>

using namespace std;

typedef map<int, int> mp;
typedef vector<int> vi;

int main() {
		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	mp myMap;
	vi vec;
	int num;

	while(cin >> num){
		
		myMap[num]++;
		if(myMap[num] == 1) vec.push_back(num);
	}
	
	for(int &i : vec) cout << i << " " << myMap[i] << endl;
}
