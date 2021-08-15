#include<bits/stdc++.h>
using namespace std;

typedef vector<pair<string, int>> vs;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vs DB;
    string names;
    bool found;

    for(int i = 0; i < n; i++) {
        cin >> names;
        found = false;
        for(int j = 0; j < DB.size(); j++){
            if(names == DB[j].first){
                found = true;
                cout << names + to_string(DB[j].second + 1) << endl;
                DB.push_back(make_pair(names + to_string(DB[j].second + 1), 0));
                DB[j].second += 1;     
                break;
            }
        }
        if(!found){
            cout << "OK" << endl;
            DB.push_back(make_pair(names, 0));
        }
    }
}