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

        int sum=0;
        vector<int>v;

        for(int i=0,j=1;i<n;i++,j++)
        {
            v.push_back(j);
             sum=sum+j;
        }
        if(sum%n==0)
        {
            for(auto &a : v)
                cout<<a<<" ";

            cout<<endl;
        }
        else
        {
            int rem=sum%n;
            //v[rem]=v[rem]+rem;
            v[0]=v[0]+rem;

            for(auto& a : v)
                cout<<a<<" ";

            cout<<endl;
        }
    }
}
