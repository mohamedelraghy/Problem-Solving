#include<bits/stdc++.h>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	int num;
	cin >> num;
	string n;
	cin >> n;
	bool flag = false;
	
	if(n.size() == 1 && n[0] == '?'){
		cout << "Yes\n";
		return 0;
	
	}if(n.size() == 1 && n[0] != '?'){
		cout << "NO\n";
		return 0;
	}
	
	for(int i = 0; i < n.size(); i++){
		
		if((n[0] == '?' && n[1] != '?') || (n[n.size() - 1] == '?' && n[n.size() - 2] != '?')){
			flag = true;
		}
			
		if(n[i] == '?'){
			if((n[i - 1] != '?') && (n[i + 1] != '?') && (n[i - 1] == n[i + 1])){
				flag = true;
			}		
		}
	
		if(n[i] == n[i + 1] && n[i] == '?'){
			flag = true;
		}
		
		if(n[i] == n[i + 1] && n[i] != '?') {
		      cout << "NO\n";
		      return 0;
		}
	}
	
	if(flag) cout << "Yes\n";
	else cout << "NO\n";
}
