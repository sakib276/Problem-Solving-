#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
     int n,m,k;
     cin>>n>>m>>k;
     int k1=(k/2);

     vector<int>v(n);
     vector<int>v2(m);

     for(auto &a : v)
     cin>>a;

     for(auto &a : v2)
     cin>>a;

     vector<int>t1;
     vector<int>t2;


     for(int i=0;i<n;i++)
     {
        if(v[i]<=k)
        {
            t1.push_back(v[i]);
        }
     }
     for(int i=0;i<m;i++)
     {
        if(v2[i]<=k)
        {
            t2.push_back(v2[i]);
        }
     }

     int cnt1=t1.size();
     int cnt2=t2.size();
     vector<int>v3;
     int x;
     int y;

    if(cnt1<k1 || cnt2<k1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0,j=1;i<n && j<=k;i++,j++)
        {   //  auto it = find(v3.begin(), v3.end(), j);
            y= count(v.begin(),v.end(),j);
            if(y!=0)
            {
                v3.push_back(j);
            }
        }
    }
   }

}
