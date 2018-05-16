#include<bits/stdc++.h>
using namespace std;

typedef map<char, int> MCI;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	MCI Map;
	Map['q'] = 9;
	Map['r'] = 5;
	Map['b'] = 3;
	Map['n'] = 3;
	Map['p'] = 1;
	Map['k'] = 0;
	
	char c;
	int black = 0, white = 0;
	
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			cin >> c;
			if(isalpha(c)) {
				if(islower(c)) black += Map[c];
				else white += Map[tolower(c)];
			}
		}
	}
	
	if(white > black) cout << "White" << endl;
	else if (white < black) cout << "Black" << endl;
	else cout << "Draw" << endl;
}
