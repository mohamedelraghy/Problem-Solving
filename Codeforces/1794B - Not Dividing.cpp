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
typedef vector<ll>      vll;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 


void solve() {
    int n, ans = 0; cin >> n;
    vll vec(n);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        if(vec[i] == 1) vec[i]++;   
    }

    for(int i = 0; i < n; i++) {
        if(i + 1 < n)
            if(vec[i + 1] % vec[i] == 0) {
                if(vec[i] > vec[i + 1]) vec[i]++;
                else vec[i + 1]++;
            }
    }

    for(auto i : vec) cout << i << " ";
    cout << endl;

}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

}
