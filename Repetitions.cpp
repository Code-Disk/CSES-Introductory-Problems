#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   string DNA;
   cin>>DNA;

   int count = 0;
   int result = 1;
   char last = ' ';

   for (int i = 0; i < (int)DNA.length(); i++)
   {
       /* code */

       char current = DNA[i];

       if(last == current)
       {
           count++;
           result = max(result , count);

       }
       else{
           last = current;
           count = 1;
       }
   }

   cout<<result;
   
   
}