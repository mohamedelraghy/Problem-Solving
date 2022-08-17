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
typedef vector<ll>      vll;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 

ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b , a % b);}

ll GcdOfArray(vll &arr, ll idx)
{
    if (idx == arr.size() - 1)
    {
        return arr[idx];
    }
    ll a = arr[idx];
    ll b = GcdOfArray(arr, idx + 1);
    return gcd(a, b); // __gcd(a,b) is inbuilt library function
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        ll l , r, k;
        cin >> l >> r >> k;
        vll vec;
        for(ll i = l; i <= r; i++) vec.push_back(i);
        reverse(vec.begin(), vec.end());

        if(k){
            while (k--)
            {
                ll a = vec.back();
                vec.pop_back();
                ll b = vec.back(); 
                vec.pop_back();
                vec.push_back(a * b);
            }
        }
        if(vec.size() == 1 && vec[0] == 1) {
            cout << "NO" << endl;
            continue;
        }else if(vec.size() == 1 && vec[0] != 1){
            cout << "YES" << endl;
            continue;
        }else{
            for(auto i : vec) cout << i << " ";

            if(GcdOfArray(vec, 0) > 1) cout << "ES" << endl;
            else cout << "O" << endl;
        }
    }   
}
