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
    string s; cin >> s;
    int sum1(0), sum2(0);

    for(int i = 0,  j = s.size()- 1; i < s.size() / 2; i++, j--){
        sum1 += s[i] - '0';
        sum2 += s[j] - '0';
    }

    cout << (sum1 == sum2 ? "YES" : "NO") << endl;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
}
