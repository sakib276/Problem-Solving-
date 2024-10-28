#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;

         vector<int>v1(n);
         vector<int>v2(n);

         for(auto& a : v1)
            cin>>a;

         for(auto& a : v2)
            cin>>a;


         vector<pair<int,int>>vp;

         for(int i=0;i<n;i++)
         {
             vp.push_back({v1[i], v2[i]});
         }
         sort(vp.begin(), vp.end());


         for (const auto& pair : vp) {
           cout<<pair.first <<" ";

    }
    cout<<endl;
    for(const auto& pair : vp)
    {
        cout<<pair.second<<" ";
    }
    cout<<endl;

     }
}
