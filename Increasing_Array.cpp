#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll n = 0;
    cin>>n; // size of the array

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    ll result = 0;
    for (int i = 1; i < n; i++)  //  3 3 ..... 
    {
        if(arr[i] < arr[i-1])
        {
            result += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1]; // Updation

        }
        
    }

    cout<< result;
    

}