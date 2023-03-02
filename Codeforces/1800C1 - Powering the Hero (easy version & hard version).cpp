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

void solve(){
  int n; cin >> n;
  ll s, sum = 0;
  priority_queue<int> q;

  while(n--){
    cin >> s;
    q.push(s);
    if(s == 0) sum += q.top(), q.pop();
  }

  cout << sum << endl;
}


int main(){

  int t; cin >> t;
  while(t--) solve();

}
