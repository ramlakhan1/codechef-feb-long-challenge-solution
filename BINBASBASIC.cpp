#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
            {
                count++;
            }
        }
        if (count <= k)
        {
            if (n % 2 == 1)
                cout << "YES" << endl;
            else if ((k - count) % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}