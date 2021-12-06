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


int main(){

    vector<ll> vec(4);
    ll a, b, c, d;

    for (int i = 0; i < 4; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    cout << vec[3] - vec[0] << " " << vec[3] - vec[1] << " " << vec[3] - vec[2] << endl;
}
