#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test, val;
    cin >> test;
    
    int p[test + 1];
    
    for(int i = 1; i <= test; i++){
        cin >> val;
        p[val] = i;   
    }
    
    for(int i = 1; i <= test; i++) cout << p[i] << " ";
    cout << endl;
}
