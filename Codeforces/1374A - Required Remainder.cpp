#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 


int main(){

    int t; cin >> t;
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;

        if (n - n % x + y <= n) cout << n - n % x + y << endl;
        else cout << n - n % x - (x - y) << endl;
    }
}
