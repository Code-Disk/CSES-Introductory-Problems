#include <bits/stdc++.h>
using namespace std;
#define ll long long
void towerOfHanoi(int n, int src, int help, int dest)
{
    if (n > 0)
    {
        towerOfHanoi(n - 1, src, dest, help);
        cout << src << " " << dest << " \n";
        towerOfHanoi(n - 1, help, src, dest);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    cin >> n; // number of disk

    cout << pow(2, n) - 1 << "\n";
    towerOfHanoi(n, 1, 2, 3);
}