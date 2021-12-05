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

    int tc; cin >> tc;

    while (tc--)
    {
        int n; cin >> n;
        vi vec(n);


        for (int i = 0; i < n; i++) cin >> vec[i];

        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        
        sort(vec.begin(), vec.end());

        bool ans = false;
        for(int i = 0; i < n - 1; i++){
            if(vec[i + 1] - vec[i] > 1){
                cout << "NO" << endl;
                ans = true;
                break;
            }
        }

        if(!ans) cout << "YES" << endl;
    }
}
