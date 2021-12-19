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

    int t; cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        int Min = min(a, b);
        int Max = max(a, b);

        if(Min * 2 < Max)
            cout << Max * Max << endl;
        else
            cout << Min * Min * 4 << endl;
    }
}
