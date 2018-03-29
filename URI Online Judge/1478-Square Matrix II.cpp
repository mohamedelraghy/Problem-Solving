#include <bits/stdc++.h>
using namespace std;

int main(){

    while(true){

        int size;
        cin >> size;
        if(size == 0) return 0;

        for(int i = 0; i < size; i++){
            bool flag = true;
            int star = i + 1;
            for(int j = 0; j < size; j++){
                if(i == j){
                    if(j) cout << " ";
                    printf("%3d", 1);
                    star = 2;
                    flag = false;
                }

                else{
                    if(j) cout << " ";
                    printf("%3d", star);
                    if(flag) star--;
                    else star++;
                }

            }
            cout << "\n";
        }
        cout << endl;

    }
}
