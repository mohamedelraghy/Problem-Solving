#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){  

    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    }

    return true;
}

int main(){

    int n, m;
    cin >> n >> m;

    int i;
    for(i = n + 1; ; i++){
        if(isPrime(i)) break;
    }

    cout << ((i == m)?"YES\n" :"NO\n"); 
}