#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<string> container;
void permutation(string s, int low, int high)
{
    if (low == high)
        container.insert(s);
    else
    {
        for (int i = low; i <= high; i++)
        {
            swap(s[low], s[i]);
            permutation(s, low + 1, high);
            swap(s[low], s[i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    int low = 0;
    int high = s.length() - 1;

    permutation(s, low, high);
    cout << (int)container.size() << "\n";
    for (auto it = container.begin(); it != container.end(); it++)
        cout << *it << "\n";
}