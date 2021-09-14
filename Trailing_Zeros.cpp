#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    cin >> n;
    int denominator = 5;
    int sum = 0;
    while ((n / denominator) > 0)
    {
        sum = sum + (n / denominator);
        denominator = denominator * 5;
    }
    cout << sum;
}