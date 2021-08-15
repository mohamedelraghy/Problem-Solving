#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        string x;
        int ans = 0;
        cin >> x;

        int digit = x[0] - '0';
        int numOfDigits = x.length();
        
        ans = (digit - 1) * 10 + numOfDigits * (numOfDigits + 1) / 2;
        cout << ans << endl;

    }
}