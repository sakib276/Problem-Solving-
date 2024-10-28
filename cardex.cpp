#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;

        vector<int>v(n);
        map<int,int>mp;
        int cnt=0;
        bool flag=false;

        for(auto &a : v)
        {
            cin>>a;
            mp[a]++;

        }

        for(auto &a : mp)
        {
            if(a.second>=k)
            {
                cnt++;

                break;
            }
        }



        if(n<k)
        {
            cout<<" ans is : "<<n<<endl;
        }
        else
        {
            if(cnt>=1)
            {

                 cout<<" ans is : "<<k-1<<endl;
            }
            else
            {

                cout<<" ans is : "<<n<<endl;
            }
        }


    }
}
