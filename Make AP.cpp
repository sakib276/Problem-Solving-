
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;


  if(abs(a-b)==abs(b-c))
  {
      cout<<"YES"<<endl;

  }
  else{
      if(a==b==c)
        {
            cout<<"YES"<<endl;
        }
        else if(((a+b)==c)|| ((b+c)==a))
        {
            cout<<"NO"<<endl;
        }
        else if( (a!=1 && b==1 && c==1))
        {
            cout<<"NO"<<endl;
        }

//        else if(a==1 || b==1 || c==1)
//        {
//            cout<<"YES"<<endl;
//        }
        else if((a==1 && b==1 && c!=1)||(a!=1 && b==1 && c==1)|| (b!=1 && a==1 && b==1))
        {
            cout<<"NO"<<endl;
        }
        else if((a==b && b!=c)|| (b==c&& a!=c) ||(a==c&& a!=b))
        {

            cout<<"YES"<<endl;
        }
        else
        {

            int d,e;
            d=abs(a-b);
            e=abs(b-c);
            if(d==e)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                if((d%e==0)|| e%d==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
  }

    }
}
