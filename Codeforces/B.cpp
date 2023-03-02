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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    
    map<char, int> myMap;
    for(int i = 0; i < s.size(); i++) myMap[s[i]]++;

    int ans = 0, val = 0;
    for(auto i : myMap){
        if(i.first >= 'A' && i.first <= 'Z'){
            if(myMap[i.first] && myMap[tolower(i.first)]){
                val = min(myMap[i.first], myMap[tolower(i.first)]);
                ans += val;
                myMap[i.first] -= val;
                myMap[tolower(i.first)] -= val;
            }
        }
    }
    
    int count = 0, res = 0;
    
    for(auto i : myMap){
        if(count >= k) break;
        if(i.second >= 2){
            res = i.second / 2;
            ans += min(res, k);
            count += min(res, k);
        }
    }

    cout << ans << endl;
}


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t; cin >> t;
    while(t--) solve();

}
