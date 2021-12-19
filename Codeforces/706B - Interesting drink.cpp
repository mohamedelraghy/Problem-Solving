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

    int n; cin >> n;
    vi vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int q; cin >> q;
    ll m;
    while (q--)
    {
        cin >> m;
        auto ans = upper_bound(vec.begin(), vec.end(), m);
        cout << ans - vec.begin() << endl;
    }
}
