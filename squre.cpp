
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[5][2];
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>ar[i][j];
            }
        }
        vector<int>v;
        v.push_back(ar[0][0]);
        v.push_back(ar[1][0]);
        v.push_back(ar[2][0]);
        v.push_back(ar[3][0]);

        sort(v.begin(),v.end());
        int sum=v[1]-v[2];
        int ans=sum*sum;
        cout<<ans<<endl;

    }
}
