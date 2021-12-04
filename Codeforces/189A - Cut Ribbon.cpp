#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers

int n, a, b, c, dp[4001];
bool comp(int a, int b){
    return (a < b);
}

int cut(int n) {

    if (n == 0) return 0;
    if (n < 0 || (n > 0 && n < a && n < b && n < c)) return 0xACCE97ED;
    if (!dp[n]) dp[n] = max({cut(n - a), cut(n - b), cut(n - c)}, comp) + 1;

    return dp[n];
}

int main(){

    cin >> n >> a >> b >> c ;
    memset(dp, 0, sizeof(dp));
    cout << cut(n) << endl;

}
