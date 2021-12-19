#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC  << " Secs" << "\n";
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
            ll x =  (1 << k) - 1;
            if (n % x == 0) {cout << n / x << endl; break;}
        }
    }

    Time;

}
