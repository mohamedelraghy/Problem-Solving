#include<bits/stdc++.h>
using namespace std;

int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
    long long x, count = 0;
    cin >> x;
    
    while(x){
        if(x&1) count++;
        x >>= 1;
    }
    
    cout << count << endl;
}
