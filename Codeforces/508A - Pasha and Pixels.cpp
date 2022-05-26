#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" \
                  << "\n";
#define INF 1000000000

// shortcuts for "common" data types in contests
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// common memset setting
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers


// idea

// for every (x, y) check :-


// x-1 y-1  x-1 y 
// x y-1    x y 


// x-1 y    x-1 y+1 
// x y      x y+1

// x y      x y+1 
// x+1 y    x+1 y+1

// x y-1    x y
// x+1 y-1  x+1 y

// when we have A 2 X 2 Matrix then we have a solution 
// else print 0 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    int a, b;
    bool Mat[1010][1010];
    memset(Mat, false, sizeof Mat);

    cin >> n >> m >> k;

    for(int i = 1; i <= k; i++){
        cin >> a >> b;
        Mat[a][b] = true;

        for(int x = -1; x < 2; x+=2){
            for(int y = -1; y < 2; y+=2){
                if(Mat[a + x][b + y] && Mat[a + x][b] && Mat[a][b + y]){
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }
    cout << 0 << endl;
}