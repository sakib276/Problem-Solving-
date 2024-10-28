#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
      //  vector<int>v;
      string v;
      cin>>v;
        int x;
        int one=0;
        int zero=0;
//        for(int i=0;i<n;i++)
//        {
//            cin>>x;
//            v.push_back(x);
//
//        }
       for(int i=0;i<n;i++)
       {
           if(v[i]=='0')
           {
               zero++;
           }
           else
           {
               one++;
           }
       }
       if(n<=2)
       {
           cout<<"NO"<<endl;
       }
       else if(one%2!=0)
       {
           cout<<"NO"<<endl;
       }
       else if(one%2==0 && n%2==0)
       {
           cout<<"YES"<<endl;
       }
       else if(one%2==0 && n%2!=0 )
       {

           int p;
           p=(n/2)+1;
          // cout<<"fc is : "<<v[p]<<endl;
           if(v[p]=='0')
           {
               cout<<"YES"<<endl;
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
    return 0;
}
