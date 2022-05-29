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


bool isLucky(ll num) {
    if(num < 0) num *= -1;
    while(num){
        int digit = num % 10;
        if(digit == 8) return true;
        num /= 10;
    }
    return false;
}

int main(){

    ll num;
    cin >> num;
    int res = 0;

    for(ll i = num; ; i++){
        if(isLucky(i) && res != 0){
            cout << res << endl;
            return 0;
        } 
        res++;
    }
}
