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

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        bool f=true;

        for(int i=0;i<n;i++)
        {
            if(v1[i]>v2[i])
            {
                f=false;
                break;
            }
            else if(v1[i]<v2[i])
            {
                v1[i]=v1[i]+1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v1[i]!=v2[i])
            {
                f=false;
                break;
            }

        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
