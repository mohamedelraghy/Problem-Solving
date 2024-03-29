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

    string s;
    cin >> s;

    int count = 0;  

    while (s.size() > 1)
    {
        int sum = 0;
        for(int i = 0; i < s.size(); i++) sum += s[i] - '0';

        s = to_string(sum);
        count++;
    }
    cout << count << endl;
}
