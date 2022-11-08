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

ll LCM(ll a, ll b){
    ll g = __gcd(a, b);
    return (a * b / g);
}

void solve(){
    int n; cin >> n;
        vi a(n + 2, 1), b(n + 2, 1);

        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n + 1; i++) b[i] = LCM(a[i], a[i -1]);

        for(int i = 1; i <= n; i++){
            if(__gcd(b[i], b[i + 1]) != a[i]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) solve();
    
}
