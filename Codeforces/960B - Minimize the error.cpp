#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef priority_queue<ll> pq;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k1, k2;
	cin >> n >> k1 >> k2;
	
	int k = k1 + k2;
	vll A(n), B(n), C(n);
	pq p;
	
	for(int i = 0; i < n; i++) cin >> A[i];
	for(int i = 0; i < n; i++){
		
		cin >> B[i];
		C[i] = abs(A[i] - B[i]);
		p.push(C[i]);
	}
		
	while(k > 0){
		ll val = p.top();
		p.pop();
		p.push(abs(val - 1));
		k--;		
	}
	
	ll sum = 0;
			
	while(!p.empty()){
		sum += p.top() * p.top();
		p.pop();
	}
	
	cout << sum << endl;
}
