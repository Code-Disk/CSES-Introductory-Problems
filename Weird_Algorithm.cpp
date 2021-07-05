#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //actual logic

    ll n = 0;  // n = 0 
    cin>>n;  // n = 3
    cout<< n << " "; // 3 
    while (n!=1)
    {
    
    if(n%2==0)
    {
        n = n /2;
        cout<< n<<" ";
    }
    else{
        n = (3*n) + 1;  // (3*3)  + 1 = 10
        cout<< n<< " "; // 10
    }
    }
}