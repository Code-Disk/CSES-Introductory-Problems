#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        ll total = ((i * i) * ((i * i) - 1)) / 2;
        ll attack = 4 * (i - 2) * (i - 1);
        ll notAttack = total - attack;
        cout << notAttack << "\n";
    }
}