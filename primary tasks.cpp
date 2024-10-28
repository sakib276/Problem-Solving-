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
        int a,b,c,d,e,f;

          string str = to_string(n);
          a=str.size();
          char s1=str[0];
          char s2=str[1];
          b=s1-'0';
          c=s2-'0';
          d=(b*10)+c;
          if(d==10)
          {
              if(a<4)
              {
                  e=n%10;
                  if(e==0 || e==1)
                  {
                      cout<<"NO"<<endl;
                  }
                  else
                  {
                      cout<<"YES"<<endl;
                  }




              }
              else if(a==4)
              {
                  char s3=str[2];
                  f=s3-'0';
                if(f==0)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                     cout<<"YES"<<endl;
                }

              }
              else
              {
                  cout<<"NO"<<endl;
              }
          }
          else
          {
              cout<<"NO"<<endl;
          }
    }
}
