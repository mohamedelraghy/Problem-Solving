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
  vi bouns;

  while(n--){
    cin >> s;
    if(s > 0) bouns.push_back(s);
    else if(s == 0 && !bouns.empty()){
      sort(bouns.begin(), bouns.end());
      sum += bouns.back();
      bouns.pop_back();
    }
  }

  cout << sum << endl;
}


int main(){

  int t; cin >> t;
  while(t--) solve();

}
