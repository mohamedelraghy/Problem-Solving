#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int getIndex(vll v, int ele) {

    auto it = find(v.begin(),
                   v.end(), ele);

    if (it != v.end())
    {
        
        int index = distance(v.begin(),
                             it);
        return index;
    }
    else
    {
        return -1;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        int n ;
        cin >> n;
        vll a(n);
        bool domin = false;
        
        cin >> a[0];
        int comp = a[0], max = a[0], index = 0;
        
        for(int j = 1; j < n; j++) {
            cin >> a[j];
            if(comp != a[j]) domin = true;
            comp = a[j];
        }

        if(!domin) {
            cout << -1 << endl;
            continue;
        }

        vll copy = a;
        sort(copy.begin(), copy.end());
        reverse(copy.begin(), copy.end());

        for(auto ele : copy){
            
            int index = getIndex(copy, ele);
            cout << index << "index \n";
            
            if(index == 0){
                if(a[index] > a[index + 1]) {
                    cout << index << endl;
                    break;
                }
            }

            if(index == n - 1){
                if(a[index] > a[index - 1]) {
                    cout << index << endl;
                    break;
                }
            }

            if(a[index] > a[index - 1] || a[index] > a[index + 1]) {
                cout << index << endl;
                break;
            }
        }

    }
}