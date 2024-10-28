#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,f,a,b;
        long long int x;
        long long int sum=0;
        cin>>n>>f>>a>>b;

        vector<int>v(n);

        for(auto& k: v)
            cin>>k;

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                x=min((v[0]*a),b);
                f=f-x;
            }
            else
            {
                x=min((v[i]-v[i-1])*a,b);
                f=f-x;


            }
        }
        if(f<1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
}
