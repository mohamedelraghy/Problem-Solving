#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vi vec(n);
	for(int i = 0; i < n; i++) cin >> vec[i];
	
	int sum1, sum2, sum3;
	sum1 = sum2 = sum3 = 0;
	
	for(int i = 0; i < n; i += 3) sum1 += vec[i]; 
	for(int i = 1; i < n; i += 3) sum2 += vec[i]; 
	for(int i = 2; i < n; i += 3) sum3 += vec[i]; 

	if(sum1 > sum2 && sum1 > sum3) cout << "chest" << endl;
	else if(sum2 > sum1 && sum2 > sum3) cout << "biceps" << endl;
	else cout << "back" << endl;
}
