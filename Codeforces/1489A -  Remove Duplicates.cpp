#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vec;



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vec contanier(n);

    for(int i = 0; i < n; i++) cin >> contanier[i];
    reverse(contanier.begin(), contanier.end());

    unordered_set<int> s;
    for (auto i : contanier) s.insert(i);

    cout << s.size() << endl;
    for(auto i : s) cout << i << " ";

}