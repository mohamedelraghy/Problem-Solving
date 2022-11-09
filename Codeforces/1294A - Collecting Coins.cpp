#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define INF 1000000000
#define pb(x) push_back(x);


// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 

void solve(){
    ll a, b, c, n;
    cin >> a >> b >> c >> n;

    ll max = 0;
    if(a >= b && a >= c) max = a;
    else if(b >= a && b >= c) max = b;
    else if(c >= a && c >= b) max = c;

    // cout << max << endl;
    ll dif = max - a + max - b + max - c;

    // cout << dif << endl;
    if(dif > n){
        cout << "NO" << endl;
        return;
    } 

    cout << ((n - dif) % 3 == 0 ? "YES" : "NO") << endl;


}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();


}
