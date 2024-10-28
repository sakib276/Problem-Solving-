
#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n,k;
        cin>>n>>k;
        vector<int>v(n);

        for(auto& a : v)
            cin>>a;

        int cnt=0;
        sort(v.begin(),v.end());
        if(k==0)
        {
            if(v[0]==1)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            if(v[k]==v[k-1])
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<v[k-1]<<endl;
            }
        }

}
