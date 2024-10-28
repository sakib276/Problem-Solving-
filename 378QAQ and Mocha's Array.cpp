#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long  int n;
        cin>>n;

        vector<long long int>v(n);

        bool f=false ;
        for(auto& a : v)
        {
            cin>>a;
            if(a==1)
            {
                f=true;
            }

        }
        long long  int cnt=0;
        bool flag=false ;

        sort(v.begin(),v.end());
        long long int tst=v[0];
        long long int j=0;
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            long long int k=0,y=0;
            for(long long int i=0; i<n; i++)
            {
                if(v[i]%tst!=0)
                {
                    y=v[i];

                    break;
                }
            }

            {
                for(long long int i=0; i<n; i++)
                {
                    if(v[i]%tst==0 || v[i]%y==0)
                    {
                        cnt++;
                    }
                }
                if(cnt==n)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;

                }
            }



        }


    }
}
