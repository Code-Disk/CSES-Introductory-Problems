#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll x = 0; // col
        ll y = 0; // row

        cin >> y >> x;
        ll result = 0;

        if (x == y)
        {
            result = x * x;
            cout << result - (x - 1) << "\n";
        }

        else if (y > x)
        {
            if (y % 2 == 0)
            {
                result = y * y;
                cout << result - (x - 1) << "\n";
            }
            else
            {
                result = (y - 1) * (y - 1);
                cout << result + x << "\n";
            }
        }

        else
        {
            if (x % 2 == 0)
            {
                result = (x - 1) * (x - 1);
                cout << result + y << "\n";
            }
            else
            {
                result = x * x;
                cout << result - (y - 1) << "\n";
            }
        }
    }
}