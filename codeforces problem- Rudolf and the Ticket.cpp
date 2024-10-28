#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,r,max,c=0;
        cin>>l>>r>>max;
        int larr[l],rarr[r];
        for(int i=0;i<l;i++)
        {
            cin>>larr[i];
        }
        for(int j=0;j<r;j++)
        {
            cin>>rarr[j];
        }
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<r;j++)
            {
                if(larr[i]+rarr[j]<=max)
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
