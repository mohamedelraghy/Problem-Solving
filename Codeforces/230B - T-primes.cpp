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

ll _sieve_size; 
bitset<10000010> bs; 
vi primes;  

void sieve(ll upperbound)
{                                
    _sieve_size = upperbound + 1; 
    bs.set();                     
    bs[0] = bs[1] = 0;            
    for (ll i = 2; i <= _sieve_size; i++)
        if (bs[i])
        {
            
            for (ll j = i * i; j <= _sieve_size; j += i)
                bs[j] = 0;
            primes.push_back((int)i); // add this prime to the list of primes
        }
} // call this method in main metho

bool isPrime(ll N)
{ // a good enough deterministic prime tester
    if (N <= _sieve_size)
        return bs[N]; // O(1) for small primes
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0)
            return false;
    return true; // it takes longer time if N is a large prime!
} // note: only work for N <= (last prime in vi "primes")^2
// insid

int main(){
    sieve(10000000);

    int tc;
    cin >> tc;
    ll TP, p;

    while (tc--){
        cin >> TP;
        p = sqrt(TP);
        if(isPrime(p) && p * p == TP)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
                                    
}