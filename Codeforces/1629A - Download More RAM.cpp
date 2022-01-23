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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi a(n), b(n);
        vii Ram(n);
        for(int i = 0; i < n; i++){
           cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++) Ram[i] = make_pair(a[i], b[i]);
        sort(Ram.begin(), Ram.end());
       
        int ans = k;
        for(auto i : Ram) {
           
            if(i.first <= ans) ans += i.second;
            else break;
        }
        cout << ans << endl;
    }
    
}
