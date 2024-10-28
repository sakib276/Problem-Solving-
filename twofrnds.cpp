#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       //vector<int>v(n);
       int v[n+4];

       for(int i=1;i<=n;i++)
       {
          cin>>v[i];
       }

      int cnt=1;
      bool flag=false ;
       for(int i=1;i<=n;i++)
       {
           //cout<<" i is : "<<i<<"  v[i+1] is : "<<v[i+1]<<endl;
           //cout<<" i+1 is : "<<i+1 <<" v[i] is : "<<v[i]<<endl;
          if(v[v[i]]==i)
          {
            flag=true;
            break;
          }
       }


       if(flag)
       {
        cout<<" ans is : "<<2<<endl;
       }
       else
       {
        cout<<" ans is : "<<3<<endl;
       }
    }

}
