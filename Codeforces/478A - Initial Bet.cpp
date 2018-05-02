#include<bits/stdc++.h>
using namespace std;


int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int sum = 0;
    for(int i = 0; i < 5; i++){
		int num;
		cin >> num;
		sum += num;
	}
	
	if(sum <= 0){
		cout << -1 << endl;
		return 0;
	}
		 	
	if(sum % 5 == 0) cout << sum / 5 << endl;
	else cout << -1 << endl;
}
