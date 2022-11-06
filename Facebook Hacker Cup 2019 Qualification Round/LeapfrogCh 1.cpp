#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("leapfrog_ch_.txt", "r", stdin);
    freopen("leapfrog_ch1_output.txt", "w", stdout);

    int T;
    cin >> T;
    int cases = 1;

    while (T--)
    {

        string s;
        cin >> s;
        int countDots, countB;
        countDots = countB = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '.')
                countDots++;
            else if (s[i] == 'B')
                countB++;
        }

        if (countDots == 0)
        {
            cout << "Case #" << cases++ << ": N" << endl;
            continue;
        }

        else
        {
            countDots--;
            if (countB > countDots)
                cout << "Case #" << cases++ << ": Y" << endl;
            else if (countB == countDots && countB != 1 && countB != 0)
                cout << "Case #" << cases++ << ": Y" << endl;
            else
                cout << "Case #" << cases++ << ": N" << endl;
        }
    }
}