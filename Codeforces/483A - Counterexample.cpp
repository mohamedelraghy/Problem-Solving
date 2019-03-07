#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll l, r;
    cin >> l >> r;

    if(r - l + 1 < 3) {cout << -1 << endl; return 0;}
    else{
        if(!(l & 1)){cout << l << " " << l + 1 << " "  << l + 2 << endl; return 0;} 
        else if(r - l + 1 > 3) {cout << l + 1 << " " << l + 2 << " " << l + 3 << endl; return 0;} 
    }

    cout << - 1 << endl;
}