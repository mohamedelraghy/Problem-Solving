#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll bigMod(ll x, ll y, ll z){
    ll res = 1;
    x = x % z;
    while(y > 0){
        if(y & 1) res = (res * x) % z;

        y = y >> 1;
        x = (x * x) % z;
    }
    return res;
}

int main(){
    ll x, y, z;
    while (cin >> x >> y >> z)
    {
        cout << bigMod(x, y, z) << endl;
    }   
}