#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll a, b, c;
    a = b = c = 0;

    int n, val;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> val;
        a += val;
    }
    for (int i = 0; i < n-1; i++)
    {
        cin >> val;
        b += val;
    }
    for (int i = 0; i < n-2; i++)
    {
        cin >> val;
        c += val;
    }

    cout << a - b << "\n" << b - c << endl;
}