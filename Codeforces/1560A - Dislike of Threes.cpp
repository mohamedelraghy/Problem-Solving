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


bool isDislike(int num){
    if(num % 3 == 0 || num % 10 == 3)  return true;
    return false;
}

int main(){
    int t, k; 
    cin >> t;

    while(t--){
        cin >> k;
        int i = 1;
        for(i; i < k + 1; ){
            
            if(isDislike(i)) k++;
            i++;
        }
        cout << i - 1 << endl;
    }
}