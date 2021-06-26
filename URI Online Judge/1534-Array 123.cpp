#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;
typedef vector<vec> mltiVec;


int main (){

    int N; 

    while (cin >> N) {

        mltiVec arr(N, vec(N, 3));

       for(int i = 0; i < N / 2; i++){
           for(int j = 0; j < N; j++){  
               if(i == j){
                   arr[i][j] = 1;
                   arr[i][(N - 1) - j] = 2;
               }
           }
       }
       for(int i = N - 1; i >= N /2; i--){
           for(int j = N - 1; j >= 0; j--){
               if (i == j) {
                   arr[i][j] = 1;
                   arr[i][(N - 1) - j] = 2;
               }
           }
       }

       for(int i = 0; i < N; i++){
           for(int j = 0; j < N; j++) cout << arr[i][j];
           cout << endl; 
       } 
    }   
}