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

        // inside int main()
    int n, r, nice; cin >> n;
    

    for(int i = 1; i <= n; i++){
        cin >> r;
        int sum =0, ans = 0;
        int start = 0, fin  = 0, com = 0;
        for(int i = 1; i < r; i++){
            cin >> nice;
            sum += nice;


            if(sum > ans || (sum == ans && i - com > fin - start)) {
                start = com;
                fin = i;
            }

            ans = max(ans, sum);

            if(sum < 0) {
                com = i;
                sum = 0;
            }
        }

        if(ans) cout << "The nicest part of route " << i << " is between stops " << start + 1 <<  " and " << fin + 1 << endl;
        else cout << "Route "<< i <<" has no nice parts" << endl;
        
    }    
}
