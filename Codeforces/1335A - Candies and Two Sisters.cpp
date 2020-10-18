#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    ll n;
    for (int i = 0; i < t; i++){
        cin >> n;
        if(n % 2 == 0) n--;

        cout << n / 2 << endl;
    }
}