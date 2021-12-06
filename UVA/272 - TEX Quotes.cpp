#include <bits/stdc++.h>

using namespace std;

int main(){
    bool open = true;
    string line; 

    while(getline(cin, line)){

       int len = line.size();

        for(int i = 0; i < len ; i++){
            if(line[i] == '"'){
                if(open) cout << "``";
                else cout << "''";

                open = !open;
            }else cout << line[i];

        }
        cout << endl;
    }
}