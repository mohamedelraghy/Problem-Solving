#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
    int n;
    cin >> n;
    vi hig(n, 0);
    for(int i = 0; i < n; i++) cin >> hig[i];

    if(n == 1) {printf("1\n"); return 0;}

    vi left(n, 0), right(n, 0);
    
    for(int i = 1; i < n; i++){
        if(hig[i] >= hig[i - 1]) left[i] = left[i - 1] + 1;
        else left[i] = 0; 
    }

    for(int i = n - 2; i >= 0; i--){
        if(hig[i] >= hig[i + 1]) right[i] = right[i + 1] + 1;
        else right[i] = 0;
    }

    // cout << "Water" << endl;
    // for(auto i : water) cout << i << " ";

    int Max = INT_MIN;
    for(int i = 0;  i < n; i++){
        if(left[i] + right[i] + 1 > Max) Max = left[i] + right[i] + 1;
    }

    cout << Max << endl;
}