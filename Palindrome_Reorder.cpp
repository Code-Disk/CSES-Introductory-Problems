#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<int> store(26); //default value of the vector created is 0

    for (char c : s)
        store[c - 'A']++;

    int possible = 0;
    for (int i = 0; i < 26; i++)
        possible = possible + (store[i] % 2);
    if (possible > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    // will make the palindrome

    string palindromic_string;

    // lets fit the left portion

    for (int i = 0; i < 26; i++)
    {
        if ((store[i] % 2) == 0)
        {
            for (int j = 0; j < store[i] / 2; j++)
                palindromic_string.push_back(i + 'A');
        }
    }

    // lets fit the mid portion
    for (int i = 0; i < 26; i++)
    {
        if (store[i] % 2)
        {
            for (int j = 0; j < store[i]; j++)
                palindromic_string.push_back(i + 'A');
        }
    }

    // lets fit the right portion
    for (int i = 25; i >= 0; i--)
    {
        if ((store[i] % 2) == 0)
        {
            for (int j = 0; j < store[i] / 2; j++)
                palindromic_string.push_back(i + 'A');
        }
    }

    cout << palindromic_string;
    return 0;
}