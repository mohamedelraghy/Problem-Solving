#include <bits/stdc++.h>
using namespace std;


int main(){

    int A[100][100];
    int maxSubRect = -127 * 100 * 100;
    int n, subRect = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
            
            if (i > 0) A[i][j] += A[i - 1][j];
            // if possible, add from top
            if (j > 0) A[i][j] += A[i][j - 1];
            // if possible, add from left
            if (i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
        }

       
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
        for (int k = i; k < n; k++) for (int l = j; l < n; l++) {
            subRect = A[k][l]; // sum of all items from (0, 0) to (k, l): O(1)
            if (i > 0) subRect -= A[i - 1][l]; // O(1)
            if (j > 0) subRect -= A[k][j - 1]; // O(1)
            if (i > 0 && j > 0) subRect += A[i - 1][j - 1]; // O(1)
            maxSubRect = max(maxSubRect, subRect); 
        }
        
    cout << maxSubRect << endl;
}