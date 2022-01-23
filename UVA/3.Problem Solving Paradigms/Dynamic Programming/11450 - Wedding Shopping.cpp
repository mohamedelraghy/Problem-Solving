#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers 


int M, C, price[25][25];
int memo[210][20];

int shop(int money, int g){
    if(money < 0) return -1000000000;
    if(g == C) return M - money;

    if(memo[money][g] != -1) return memo[money][g];
    int ans = -1;
    for(int model = 1; model <= price[g][0]; model++)
        ans = max(ans, shop(money - price[g][model], g + 1));

     
    return memo[money][g] = ans;
}

int main(){

    int tc; cin >> tc;
    while (tc--)
    {
        cin >> M >> C;
        for(int i = 0; i < C; i++){
            cin >> price[i][0];
            for(int j = 1; j <= price[i][0]; j++) cin >> price[i][j];
        }

        memset(memo, -1, sizeof memo);
        int score = shop(M, 0);
        if(score < 0) cout << "no solution" << endl;
        else cout << score << endl;
    }
}
