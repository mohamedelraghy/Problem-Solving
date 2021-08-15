#include <bits/stdc++.h>
using namespace std;

typedef vector<bool> vb;


int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;
    vb vec(10);
    int markRight = 9;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            vec[i] = 1;
        }else if(s[i] == 'R'){
            vec[markRight] = 1;
            markRight--;
        }else{
            vec[s[i] - '0'] = 0;
        }
    }

    for(auto i : vec) cout << i;
}