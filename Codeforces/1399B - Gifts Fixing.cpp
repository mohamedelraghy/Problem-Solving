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
typedef vector<ll>      vll;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 


int main(){

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a, b, minC = INF, minO = INF;
        vll candies(n), oranges(n);

        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];
            if(candies[i]< minC) minC = candies[i];

        }
        for (int i = 0; i < n; i++)
        {
            cin >> oranges[i];
            if (oranges[i] < minO) minO = oranges[i];
        }
        ll ans(0);
        for(int i = 0; i < n; i++)
            ans += max(abs(oranges[i] - minO), abs(candies[i] - minC));
        
        cout << ans << endl;
    }
}
