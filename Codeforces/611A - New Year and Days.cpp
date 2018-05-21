#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, res = 0;
	char s[6];
	scanf("%d of %s", &n, s);
	
	if(s[0] == 'w') res = 52 + (n == 5 || n == 6);
	else res = 12 * (n <= 29) + 11 * (n == 30) + 7 * (n == 31);

	cout << res << endl;
}
