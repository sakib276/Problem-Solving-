//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    long long int t;
//    cin>>t;
//    while(t--)
//    {
//        long long int a,b,c;
//        cin>>a>>b>>c;
//
//        if(a==b==c)
//        {
//            cout<<1<<" "<<1<<" "<<1<<endl;
//        }
//        else if(a==b && a!=c)
//        {
//            cout<<0<<" "<<0<<" "<<1<<endl;
//        }
//        else if(a==c && a!=b)
//        {
//            cout<<0<<" "<<1<<" "<<0<<endl;
//        }
//        else if(c==b && a!=b)
//        {
//            cout<<1<<" "<<0<<" "<<0<<endl;
//        }
//        else if(a!=b && b!=c)
//        {
//            int mx=max(a,b);
//            if(c>mx)
//            {
//                cout<<0<<" "<<0<<" "<<1<<endl;
//            }
//            else
//            {
//               if(mx==a)
//               {
//                   cout<<1<<" "<<0<<" "<<0<<endl;
//               }
//               else
//               {
//                   cout<<0<<" "<<1<<" "<<0<<endl;
//               }
//            }
//        }
//    }
//}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;

        long long int x,y,z;
        x=a%2;
        y=b%2;
        z=c%2;

        if(y==z)
        {  cout<<1<<" ";

        }
        else
        {
             cout<<0<<" ";
        }


        if(x==z)
        {
             cout<<1<<" ";
        }
        else
        {
             cout<<0<<" ";
        }


        if(y==x)
        {
            cout<<1<<" ";
        }
           else
           {
                cout<<0<<" ";
           }



        cout<<endl;


    }
}
