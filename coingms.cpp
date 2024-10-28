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
        int cntU=0;


        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='U')
            {
                cntU++;
            }
        }

        if(cntU%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
