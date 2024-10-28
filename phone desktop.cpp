#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>y>>x;

        int cnt=0;
        while(x>0 || y>0)
        {
            if(x>=2)
            {
                x=x-2;
                y=y-7;
                cnt++;
            }
            else if(x==1)
            {
                x=x-1;
                y=y-11;
                cnt++;
            }
            else
            {
                y=y-15;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}




