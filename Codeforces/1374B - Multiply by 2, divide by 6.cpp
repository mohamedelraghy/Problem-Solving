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
    ll n;
    cin >> n;
    int cnt2(0), cnt3(0);
    
    while(n % 2 == 0){
        n /= 2;
        cnt2++;
    }

    while(n % 3 == 0){
        n /= 3;
        cnt3++;
    }

    if(n == 1 && cnt3 >= cnt2) cout << 2 * cnt3 - cnt2 << endl;
    else cout << -1 << endl;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();
}
