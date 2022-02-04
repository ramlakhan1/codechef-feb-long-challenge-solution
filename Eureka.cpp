#include <bits/stdc++.h>
using namespace std;

int mai()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        double ans = 0.143 * n;
        // cout<<pow(ans,n)
        double result = pow(ans, n);
        cout << round(result) << endl;
    }
}
