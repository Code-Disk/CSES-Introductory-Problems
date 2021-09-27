#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases = 0, a = 0, b = 0;
    cin >> testCases;
    while (testCases--)
    {
        // a and b
        cin >> a >> b;

        if ((2 * a - b) >= 0 && (2 * a - b) % 3 == 0 && (2 * b - a) % 3 == 0 && (2 * b - a) >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}