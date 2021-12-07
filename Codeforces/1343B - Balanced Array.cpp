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

    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int sumEven(0), sumOdd(0);
        vi vec;
        for(int i = 2; i <= n; i += 2){ vec.push_back(i); sumEven += i;}
        for(int i = 1; i <= n; i += 2){ vec.push_back(i); sumOdd += i;}

        int diff = sumEven - sumOdd;
        if(diff % 2 == 0) {
            vec[n - 1] += diff;
            cout << "YES" << endl;
            for(auto i : vec) cout << i << " ";
            cout << endl;
        }else cout << "NO" <<endl;
    }
}
