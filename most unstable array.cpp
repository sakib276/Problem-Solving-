#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int n,m;
      long long  int ans=0;
        cin>>n>>m;
        vector<long  long int>v;
         long long int a,b,c,d;
        a=2;
        v.push_back(0);
        for(long long int i=1;i<n;i=i+2)
        {
            v.push_back(a);
            a++;
            if(v.size()<=n)
            {
                v.push_back(0);

            }
            else
            {
                break;
            }
        }
        for(long long int i=0;i<n;i++)
        {
            if(v[i]!=0)
            {
                ans=ans+(v[i]*v[i]);
            }
        }
        cout<<" ans is : "<<ans<<endl;
    }
}
