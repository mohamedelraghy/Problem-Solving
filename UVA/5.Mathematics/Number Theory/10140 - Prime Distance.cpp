#include <bits/stdc++.h>
using namespace std;

#define P(x) cerr << #x << " = { " << x << " }\n"
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers

bitset<46500> bs;
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

int nextPrime(ll l, ll u){
    for(++l ; l <= u; l++) 
        if(isPrime(l)) return (int)l;
    return -1;
}

int main(){

    sieve(46500);

    ll L, U;
    
    while (cin >> L >> U)
    {
        int last = nextPrime(L - 1, U), next;
        int min = INF, max = 0;
        int c1, c2, d1, d2;
        // P(last);
        if(last != -1) while (1) {
            next = nextPrime(last, U);
            if(next == -1) break;
            if(next - last > max){
                max = next - last;
                d1 = last;
                d2 = next;
            }

            if (next - last < min){
                min = next - last;
                c1 = last;
                c2 = next;
            }
            // P(next);
            last = next;

        }
        
        if(!max) cout << "There are no adjacent primes." << endl;
        else printf("%d,%d are closest, %d,%d are most distant.\n", c1, c2, d1, d2);
    }
}