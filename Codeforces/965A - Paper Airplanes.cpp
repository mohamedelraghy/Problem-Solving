#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int k, n, s, p;
	cin >> k >> n >> s >> p;

	int sheet_num = ceil(float(n) / s);
	double res = (sheet_num * k) / float(p);
	printf("%.0f", ceil(res));

}
