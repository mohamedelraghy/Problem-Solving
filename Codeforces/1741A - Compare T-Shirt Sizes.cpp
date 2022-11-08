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



void solve(){
    string a, b;
    cin >> a >> b;

    char lastCharA = a[a.size() -1];
    char lastCharB = b[b.size() -1]; 

    if(lastCharA == lastCharB){
        if(a.size() == b.size()) cout << "=" << endl;
        else if(lastCharA == 'S') cout << (a.size() > b.size() ? "<" : ">") << endl;
        else cout << (a.size() > b.size() ? ">" : "<") << endl; 
    }else cout << (lastCharA > lastCharB ? "<": ">") << endl;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

}
