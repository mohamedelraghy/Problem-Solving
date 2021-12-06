#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 

bitset<2000> bs;
vi primes;

void sieve(int upperbound) {
    bs.set();
    bs[1] = 0;
    primes.push_back(1);
    for(int i = 2; i <= upperbound; i++){
        if(bs[i]){
            for(int j = i * i; j <= upperbound; j += i) bs[j] = 0;
            primes.push_back(i);
        }
    }
}


int main(){
    sieve(1110);
    int n, c;

    
    while (cin >> n >> c)
    {
        cout << n << " " << c << ":";

        vi vec;
        for(int i = 0; i < n; i++){
            if(n >= primes[i]) vec.push_back(primes[i]);
            else break;
        }
        
        int printed = 0;
        if(vec.size() % 2 == 0) printed = c * 2;
        else printed = (c * 2) - 1;

        if(printed >= vec.size()) for(auto i : vec) cout << " " << i;
        else {
            int pos = (vec.size() - printed) / 2;
            for(int i = pos; printed > 0 ; i++, printed--) cout << " " << vec[i];
        }
        cout << "\n\n";

    }
}
