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

bitset<10000010> bs;
vi primes;

void sieve(ll upperbound) {
    bs.set();
    bs[0] = bs[1] = 0;

    for(ll i = 2; i <= upperbound; i++)
        if(bs[i]) {       
            for(ll j = i * i; j <= upperbound; j += i) bs[j] = 0;
            primes.push_back((int)i);
        }
}

bool isPrime(int P) {
    if(P < bs.size()) return bs[P];
    for(int i = 0; i < primes.size(); i++){
        if(P % primes[i] == 0) return false;
    }
    return true;
}

int main(){
    sieve(1000000);
    int n;
    while (cin >> n)
    {
        if(n == 0) break;
        int a, b;
        a = b = 0;
        bool ans = false;

        for(int i = 1; i < primes.size(); i++){
            a = primes[i];
            b = n - a;
            if (isPrime(b) && b != 2) { ans = true; break; }
        }

        if(ans) cout << n << " = " << a << " + " << b << endl;
        else cout << "‘Goldbach's conjecture is wrong." << endl;
    }
}
