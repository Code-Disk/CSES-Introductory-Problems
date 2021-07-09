#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll n = 0;
   cin>>n;

   if(n==1)
   {
       cout<<1;
       return 0;
   }

   if(n == 2 || n == 3)
   {
       cout<<"NO SOLUTION";
       return 0;
   }

   // 4
   // 2 4 1 3


    if( n %2 ==0 )
    {
    for(int i = 2 ; i<=n ; i = i+2)
        cout<< i << " ";
    for(int i = 1 ; i< n ; i = i+2)
        cout<< i << " ";
    }
    else{
        for(int i = 1 ; i<= n ; i = i+2)
        cout<< i << " ";
        for(int i = 2 ; i< n ; i = i+2)
        cout<< i << " ";
    }

}