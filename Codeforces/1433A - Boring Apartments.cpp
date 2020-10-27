#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        ++count;
    }

    return count;
}

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
       
        if(numOfDigits == 1) ans = 1;
        if(numOfDigits == 2) ans = 3;        
        if(numOfDigits == 3) ans = 6;    
        if(numOfDigits == 4) ans = 10;
        
        ans += (digit - 1) * 10;
        cout << ans << endl;

    }
}