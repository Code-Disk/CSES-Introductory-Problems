#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll n = 0;
   cin>>n;
   int number = 0;
   ll sumOfGiven = 0;
   for(int i = 1 ; i<n ; i++)
   {
       cin>> number;
        sumOfGiven += number;
   }
   ll orignalSum = (n * (n+1)) / 2 ;

   cout<< orignalSum - sumOfGiven;
}