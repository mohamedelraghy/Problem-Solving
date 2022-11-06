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


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll n;
        string s;
        cin >> n >>s ;



        ll cnt0 = 0, cnt1 = 0;
        for(ll i = 0; i < s.size(); i++){
    
            cnt0 += s[i] == '0';
            cnt1 += s[i] == '1';
        }
        
        ll ans = cnt0 * cnt1;
        ll maxSub = 1;

        for(ll i = 1; i < s.size(); i++){
            if(s[i] == s[i - 1]) maxSub++;
            else{
        
                ans = max(ans, maxSub * maxSub);
                maxSub = 1;
            }
        }

        ans = max(ans, maxSub * maxSub);
        cout << ans << endl;
    }

}
