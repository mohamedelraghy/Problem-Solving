#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int a[n];
        

        for(int i = 0; i < n; i++) cin >> a[i];
        cout << (a[0] == 1 ? "YES" : "NO");
        cout << endl;
    }
}
