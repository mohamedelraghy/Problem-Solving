#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    ll a, b, move = 0;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        
        if(a % b == 0)  cout << 0 << endl;
        else cout << b - a % b << endl;
    }
}   