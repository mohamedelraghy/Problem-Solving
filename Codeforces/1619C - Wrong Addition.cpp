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

void solve(){
    ll a, s;
    vi b;
    cin >> a >> s;
    while (s)
    {
        int x = a % 10;
        int y = s % 10;

        if (y >= x)
            b.push_back(y - x);
        else
        {
            s /= 10;
            y += 10 * (s % 10);
            if (x < y && y >= 10 && y <= 19)
                b.push_back(y - x);
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        a /= 10;
        s /= 10;
    }

    if (a)
        cout << -1 << endl;
    else
    {
        while (b.back() == 0)
            b.pop_back();
        for (int i = b.size() - 1; i >= 0; i--)
            cout << b[i];
        cout << "\n";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
       solve();
    }
}
