#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
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
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    ll n;

    while (t--)
    {   
        cin >> n;
        cout << ((n & (n - 1)) ?"YES\n" :"NO\n");   
    }
    
}
