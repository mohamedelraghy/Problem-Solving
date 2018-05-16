#include<bits/stdc++.h>
using namespace std;

typedef map<int, int> Map;
typedef vector<int> vi;

int main() {
		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, ruble;
	cin >> n;
	Map m;
	
	for(int i = 0; i < n; i++) {
		cin >> ruble;
		if(ruble == 25) m[25]++;
		else if(ruble == 50){
			if(m[25] > 0) {
				m[50]++;
				m[25]--;
			} else {
				cout << "NO" << endl;
				return 0;
			}	
		}
		else {		
			if (m[50] > 0 && m[25] > 0){
				m[50]--;
				m[25]--;
			}
			else if(m[25] >= 3 && m[50] == 0) m[25] -= 3;
			else {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;	
}
