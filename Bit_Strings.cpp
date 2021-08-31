#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod ((int)1e9 + 7)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    cin >> n;
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = (2 * result);
        if (result > mod)
            result %= mod;
    }
    cout << result;
}