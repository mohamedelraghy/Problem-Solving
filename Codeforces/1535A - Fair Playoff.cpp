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
    vi vec(4);
    for(int i = 0; i < 4; i++) cin >> vec[i];
    
    int win1, win2;
    win1 = max(vec[0], vec[1]);
    win2 = max(vec[2], vec[3]);
    
    sort(vec.begin(), vec.end());
    
    int max1 = vec[3];
    int max2 = vec[2];
    
    if((win1 == max1 && win2 == max2) || (win1 == max2 && win2 == max1)) cout << "YES" << endl;
    else cout << "NO" << endl;


}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
}
