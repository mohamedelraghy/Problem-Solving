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

void swap(int *a, int *b){
    int s = *a;
    *a = *b;
    *b = s;
}

int main(){

    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());

        for(int i = 0; i < k; i++){
            if(a[i] <= b[i]) swap(&a[i], &b[i]);
        }
        // for(auto i : a) cout << i << " ";
        // cout << endl;
        // for (auto i : b)
        //     cout << i << " ";

        

        int sum = 0;
        for(auto i : a) sum += i;
        cout << sum << endl;
    }
    

}
