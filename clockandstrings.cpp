#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt=0;

        int mx=max(a,b);
        int mn=min(a,b);

        for(int i=mn;i<=mx;i++)
        {

            if(i==c || i==d)
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}
