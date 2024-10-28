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

        int cnt=0;
       int f=0;
      if(n==1)
      {
          cout<<0<<endl;
      }
      else{
        for(int i=0;i<n-1;i++)
        {
//            if(i==n-1)
//            {
//                cnt++;
//            }
            if(str[i]=='1'&& str[i+1]=='0')
            {
                cnt++;
                f++;
            }
            else if(str[i]=='0' && str[i+1]=='1' && f)
            {
                cnt++;
            }
        }
//        if(str[0]=='0')
//        {
//            cout<<cnt-2<<endl;
//        }
//        else
//        {
//            cout<<cnt-1<<endl;
//        }
          cout<<cnt<<endl;
      }
    }
}
