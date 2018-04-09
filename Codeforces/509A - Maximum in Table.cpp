#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int Mat[n + 1][n + 1];
	memset(Mat, 0, sizeof(Mat));
	for(int i = 1; i <= n; i++) Mat[0][i] = 1;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			Mat[i][j] = Mat[i - 1][j] + Mat[i][j - 1];
		}
	}
	
	cout << Mat[n - 1][n] << endl;
}
