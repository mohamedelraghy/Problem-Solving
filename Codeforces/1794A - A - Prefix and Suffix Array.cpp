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
typedef vector<string>  vs;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 

void solve() {
    int n; cin >> n;
    vs longSub;
    string s;

    for(int i = 0; i < 2 * n - 2; i++){
        cin >> s;
        if(s.size() == n - 1) longSub.pb(s);
        
    }

    reverse(longSub[0].begin(), longSub[0].end());
    
    cout << ((longSub[0] == longSub[1]) ? "YES" : "NO") << endl;
    
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
}
