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

int GCD(int a, int b){ return  b == 0 ? a : GCD(b, a % b); }


int main(){

    int t;
    while (true)
    {
        cin >> t;
        if(!t) break;

        int G = 0;
        for(int i = 1; i < t; i++)
            for(int j = i + 1; j <= t; j++)
                G += GCD(i, j);

        cout << G << endl;
    }   
}
