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
bool isEven(int num){
    if(num & 1) return false;
    else return true;
}

int main(){
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int num;
        int evenNotGood(0), oddNotGood(0);

        for(int i = 0; i < n; i++){
            cin >> num;
            if (isEven(i) && !isEven(num)) evenNotGood++;
            if(!isEven(i) && isEven(num))  oddNotGood++;
            
        }

        if(oddNotGood == evenNotGood) cout << oddNotGood << endl;
        else cout << -1 << endl;
    }
    
}
