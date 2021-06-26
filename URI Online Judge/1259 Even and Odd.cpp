#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;


int main(){
    int N, num;
    vec even, odd;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> num;
        if(num & 1) odd.push_back(num);
        else even.push_back(num);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());

    for (auto i : even) cout << i << endl;
    for(auto i : odd) cout << i << endl;

}