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


bool can(int m, int s){
    return s >= 0 && s <= m * 9;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, s, digit;
    cin >> m >> s;
    string a, b;
    a = b = "";

    if(s == 0){
        cout << (m == 1 ? "0 0": "-1 -1") << endl;
        return 0;
    }

    for(int i = 0; i < m; i++){
        digit = min(s, 9);
        b += digit + '0';
        s -= digit;
    }

    if(s > 0){
        cout << "-1 -1" << endl;
        return 0;
    }

    for(int i = m -1; i >= 0; i--) a += b[i];
    int i = 0;
    for(i ; a[i] == '0'; i++);

    a[i]--, a[0]++;
    cout << a << " " << b << endl;

}
