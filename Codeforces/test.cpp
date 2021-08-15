#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> ps;
typedef vector<ps> vs;


int main(){

    vs DB;
    DB.push_back(make_pair("mohamed", 0));
    cout << DB[0].first << endl;
    cout << DB[0].second << endl;

    DB[0].second += 1;

    cout << DB[0].first << endl;
    cout << DB[0].second << endl;
}