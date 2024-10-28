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

        string str;
        cin>>str;


        int cntA=0;
        int cntB=0;
        int t=0;

        for(int i=0; i<n; i++)
        {
            if(str[i]=='B')
            {
                cntB++;
                t++;

            }
            else
            {
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(str[i]=='A')
            {
                cntA++;
                t++;

            }
            else
            {

                break;
            }
        }
        int total=cntA+cntB;
        int ans=n-total-1;
        if(ans>0)
            cout<<" ans is : "<<ans<<endl;
            else
                cout<<0<<endl;




    }
}
