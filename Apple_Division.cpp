#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n = 0;
vector<ll> apples;
ll minimal(int index, ll crate_blue, ll crate_orange)
{
    if (index == n)
        return abs(crate_blue - crate_orange);
    else
        return min(minimal(index + 1, crate_blue + apples[index], crate_orange),
                   minimal(index + 1, crate_blue, crate_orange + apples[index]));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll w = 0;
        cin >> w;
        apples.push_back(w);
    }

    ll m = minimal(0, 0, 0);
    cout << m;
}