#include<bits/stdc++.h>
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	int mat[n][n];
	memset(mat, 0, sizeof(mat));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k  < n; k++){
				if(s[i] == s[k] && s[j] == s[k +1]){
					mat[i][j]++;
				}
			}
		}
	}
	int max = 0;
	int pos_i = 0, pos_j = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(mat[i][j] > max){
				max = mat[i][j];
				pos_i = i;
				pos_j = j;
			} 
		}
	}
	
	cout << s[pos_i] << s[pos_j] << endl;
}
