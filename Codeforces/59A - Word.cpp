#include<bits/stdc++.h>
using namespace std;

bool isLower(char c);

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	int lowerCount = 0, upperCount = 0;
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		if(isLower(s[i])) lowerCount++;
		else upperCount++;
	}
	
	if(lowerCount > upperCount || lowerCount == upperCount){
		for(int i = 0; i < s.size(); i++){
			if(!isLower(s[i])) s[i] += ('a' - 'A');
		}
	}else{
		for(int i = 0; i < s.size(); i++){
			if(isLower(s[i])) s[i] += ('A' - 'a');
		}
	}
	
	cout << s << endl;
}

bool isLower(char c){
	
	if(c >= 'a' && c <= 'z') return true;
	else return false;
}
