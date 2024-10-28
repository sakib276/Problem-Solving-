#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string v1;
        cin>>v1;
        string v2;
        cin>>v2;

        int cnt=0;
        int i=0,j=0;
        int p=n,k=m;

        while(true)
        {
            if(v1[i]==v2[j])
            {
                cnt++;
                i++;
                j++;
                p--;
                k--;
            }
            else
            {
                j++;
                k--;
            }
            if(k==0 || p==0)
            {
                cout<<" ans is : "<<cnt<<endl;
                break ;
            }

        }
    }
}
