#include<bits/stdc++.h>
using namespace std;


int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	int MIN = b, Max = b, count = 0;
	
	while(--a) {
		cin >> b;
		if(b > Max){
			Max = b;
			count++;
		}
		if(b < MIN) {
			MIN = b;
			count++;
		}
	}
	
	cout << count << endl;
}
