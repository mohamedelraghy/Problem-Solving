#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef unsigned long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;



int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

	int n;
	cin >> n;
	vector<ii> pages;

	for(int i = 0; i < n; i++){
		int l, r;
		cin >> l >> r;
		pages.push_back(ii(l, r));
	}

	int k;
	cin >> k;

	if(k > pages[pages.size() - 1].s){ cout << 0 << endl; return 0;}

	int i = 0;
	for(i; i < n; i++){
		if(k <= pages[i].s){
			break;
		}
	}
	cout << n - i << endl;
}