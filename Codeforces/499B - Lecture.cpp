#include<bits/stdc++.h>
using namespace std;

typedef string s;
typedef pair<s, s> p;
typedef vector<p> vec;

int main(){
		
	int n, m;
	cin >> n >> m;
	s s1, s2, s3;
	vec v;
	
	for(int i = 0; i < m; i++){
		cin >> s1 >> s2;
		v.push_back(make_pair(s1, s2));
	}
	
	for(int i = 0; i < n; i++){
		cin >> s3;
		for(auto i : v){
			if(i.first == s3){
				if(i.first.size() > i.second.size()) cout << i.second << " ";
				else cout << i.first << " ";
				
				break;
			}
		}
	}
}
