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

        vector<int>v(n-1);

        for(auto& a: v)
            cin>>a;


         int sum=0;
         for(int i=0;i<n-1;i++)
         {
             sum=sum+v[i];
         }
         if(sum>0)
         {
             sum=(-1)*sum;
             cout<<sum<<endl;
         }
         else
         {
             sum=(-1)*sum;
             cout<<sum<<endl;
         }
    }
}
