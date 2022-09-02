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
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        vi a(n);
        
        for(int &e : a) cin >> e;

        vi copy = a;
        sort(copy.begin(), copy.end());

        for(int i = 0; i < n; i++){
            if(a[i] != copy[1]) cout << i + 1 << endl;
        }
    }
}
