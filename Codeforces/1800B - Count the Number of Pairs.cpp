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
typedef vector<vi>      vv;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 


void solve(){
    int n, k;
    cin >> n >> k;
    vv cnt(26, vi(2, 0));
    string s;
    cin >> s;

    for(auto c : s)
        if(islower(c)) ++cnt[c - 'a'][0];
        else ++cnt[c - 'A'][1];
    
    int res = 0;
    for(auto v : cnt){
        res += min(v[0], v[1]);
        int rem = min(abs(v[0] - v[1]) >> 1, k);
        k -= rem;
        res += rem;
    }

    cout << res << endl;
}


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t; cin >> t;
    while(t--) solve();

}
