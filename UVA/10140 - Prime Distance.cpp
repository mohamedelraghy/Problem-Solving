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

bitset<100010> bs;
vi primes;

void sieve(ll upperbound){
    bs.set();
    bs[0] = bs[1] = 0;

    for(ll i = 2; i <= upperbound; i++){
        if(bs[i]){
            for(ll j = i * i; j <= upperbound; j += i){
                bs[j] = 0;
            }
            primes.push_back((int)i);
        }
    }    
}

bool isPrime(ll P){
    if(P < bs.size()) return bs[P];
    for(int i = 0; i < primes.size(); i++) 
        if(P % primes[i] == 0) return false;
    
    return true;
}

int main(){

    sieve(100000);

    ll L, U;
    while (cin >> L >> U)
    {
        vector<ll> vec;

        if(L % 2 == 0 && L != 2) L++;

        for(ll i = L; i <= U; i += 2){
           
            if(isPrime(i)) vec.push_back(i);
        }
        
        if(vec.size() < 2){
            cout << "There are no adjacent primes." << endl;
            continue;
        }

        int min = 9000000 , max = 0xABCDE234;
        int c1, c2, d1, d2;
        
        for(ll i = 0; i < vec.size() - 1; i++){
            if(primes[i + 1] - primes[i] > max){
                max = primes[i + 1] - primes[i];
                d1 = primes[i];
                d2 = primes[i + 1];
            }
            if (primes[i + 1] - primes[i] < min){
                min = primes[i + 1] - primes[i];
                c1 = primes[i];
                c2 = primes[i + 1];
            }
        }
        printf("%d,%d are closest, %d,%d are most distant.\n", c1, c2, d1, d2);
    }
}