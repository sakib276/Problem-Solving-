#include<bits/stdc++.h>
using namespace std;
#define FIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define debug(arg)   cout<<#arg<<" = "<<arg<<endl;
#define lint          long long int
int main()
{
    FIO
   lint t;
   cin>>t;
   while(t--)
   {
       lint a,b;
       lint c,e,f;
       cin>>a>>b;

       c=abs(a-b);
       if(a==b)
       {
           cout<<"Bob"<<endl;
       }
       else if(c%2==0)
       {
           cout<<"Bob"<<endl;
       }
       else if(c%2!=0)
       {
           cout<<"Alice"<<endl;
       }
   }
 return 0;
}
