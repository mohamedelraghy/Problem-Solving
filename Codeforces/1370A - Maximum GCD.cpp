#include <bits/stdc++.h>
using namespace std;

int GCG(int a, int b) {return b == 0 ? a : GCG(b, a % b); } 


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin >> t;
    int num;

    for (int i = 0; i < t; i++){
        cin >> num;
       
        cout << num / 2 << endl;
    }
}