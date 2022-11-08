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


ll fact(int n){
    if(n <= 1) return 1;
    else return n * fact(n - 1);
}

ll C(int n, int r) {
    return fact(n) / fact(r) / fact(n - r);
}

void solve(){
    short n, a; cin >> n;

    for(short i = 0; i < n; i++) cin >> a;

    cout << C(10 - n, 2) * C(4, 2) << endl;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short t; cin >> t;
    while (t--) solve();

}
