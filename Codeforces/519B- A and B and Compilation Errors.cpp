#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vi vec1(n), vec2(n - 1);

    for(int i = 0; i < n; i++) cin >> vec1[i];
    sort(vec1.begin(), vec1.end());
    for(int i = 0; i < n - 1; i++) cin >> vec2[i];
    sort(vec2.begin(), vec2.end());

    for(int i = 0; i < n; i++) {
        if(vec1[i] != vec2[i]){
            cout << vec1[i] << endl;
            break;
        }
    }

    vec1 = vec2;
    vi vec3(n-2);

    for(int i = 0; i < n - 2; i++) cin >> vec3[i];
    sort(vec3.begin(), vec3.end());


    for (int i = 0; i < n - 1; i++)
    {
        if (vec1[i] != vec3[i])
        {
            cout << vec1[i] << endl;
            return 0;
        }
    }
}