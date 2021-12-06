#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 

bool isRound(string num){

    for(int i = num.size() - 1; i > 0; i--) 
        if(num[i] != '0') return false;
    
    return true;
}

int main(){

    // cin >> num;
    // cout << isRound(num);
    int tc; cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        string num = to_string(n);
        vi vec;

        if(isRound(num)) {
           cout << "1\n" << n << endl;
           continue; 
        }else{
            
            int i = 0;
            
            while (!isRound(num))
            {
                int digit = n % 10;
                n = n / 10;
                num = to_string(n);
                if(digit) vec.push_back(digit * pow(10, i));
                i++;
            }

            vec.push_back(n * pow(10, i));
            cout << vec.size() << endl;
            for(auto i : vec) cout << i << " ";
            cout << endl;
        }

    }

    
    

}
