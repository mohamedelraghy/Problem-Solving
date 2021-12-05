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

bitset<3005> bs;
vi primes;


void sieve(int n){
    bs.set();
    bs[0] = bs[1] = 0;

    for(int i = 2; i <= n; i++) {
        if(bs[i]){
            for(int j = i * i; j <= n; j += i) bs[j] = 0;
            primes.push_back(i);
        }
    }
}

bool isPrime(int n){
    if(n <= bs.size()) return bs[n];
    for(int i = 0; i < primes.size(); i++){
        if(n % primes[i] == 0) return false;
    }
    return true;
}

int main(){

    sieve(3001);

    int n, ans = 0;
    cin >> n;

    for(int i = 2; i <= n; i++){

        int count = 0;
        
        for(int j = 0; j < primes.size(); j++) {
            if(primes[j] > i) break;
            if(!(i % primes[j])) count++; 
        }

        if(count == 2) ans++;
    }

    cout << ans << endl;

}
