#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	  short len;
    cin >> len;

    int arr[len];

    for (int i = 0; i < len; i++) cin >> arr[i];

    if (len % 2 == 0) {
        cout << "No" << endl;
        return 0;
    }

    if (arr[0] % 2 == 0 || arr[len - 1] % 2 == 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
}
