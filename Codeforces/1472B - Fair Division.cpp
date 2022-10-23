#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define INF 1000000000
#define pb(x) push_back(x);


// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 


int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, w;
    cin >> t;

    while (t--){
        cin >> n;
        int count1(0), count2(0);
        
        for(int i = 0; i < n; i++) {
            cin >> w;
            if(w == 1) count1++;
            else count2++;
        }

        if((count1 + 2 * count2) % 2 != 0)  cout << "NO" << endl;
        else {
            int sum = (count1 + 2 * count2) / 2;
            if(sum % 2 == 0 || (sum % 2 == 1 && count1 != 0)) cout << "YES" << endl;
            else cout << "NO" << endl;   
        } 
    }
}
