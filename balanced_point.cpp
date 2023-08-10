#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        ll left = 0;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            sum -= a[i];
            if (sum == left)
            {
                cout << i << ' ';
                ok = true;
            }
            left += a[i];
        }
        if (!ok)
            cout << "-1\n";
        else
            cout << endl;
    }
    return 0;
}