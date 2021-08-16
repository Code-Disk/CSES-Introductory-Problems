#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = 0;
    cin >> n;

    ll sum = 0;
    vector<ll> set1, set2;
    sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES\n";
        ll mid = sum / 2;

        for (int i = n; i >= 1; i--)
        {
            if (i <= mid)
            {
                set1.push_back(i);
                mid = mid - i;
            }
            else
                set2.push_back(i);
        }

        cout << set1.size() << "\n";
        for (ll i = 0; i < (int)set1.size(); i++)
            cout << set1[i] << " ";
        cout << "\n";
        cout << set2.size() << "\n";
        for (ll i = 0; i < (int)set2.size(); i++)
            cout << set2[i] << " ";
    }
    else
        cout << "NO";
}