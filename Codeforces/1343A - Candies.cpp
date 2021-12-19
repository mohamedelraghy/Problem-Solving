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

    int t;
    cin >> t;

    while (t--)
    {
        ll n; cin >> n;
        for(int k = 2; k < 30; k++){
            ll x = n / (pow(2, k) - 1);
            if ((n % (ll)(pow(2, k) - 1)) == 0) {cout << x << endl; break;}
        }
    }
}
