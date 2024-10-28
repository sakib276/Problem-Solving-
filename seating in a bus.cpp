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
        int ar[n];
        int a,b,c,d,e,f;
        bool fl=true;
        f=0;

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
//        for(int i=1;i<n-1;i++)
//        {
//         a=ar[i-1];
//         b=ar[i+1];
//         c=ar[i];
//         if(a!=(c+1) && b!=(c-1))
//         {
//             fl=false;
//         }
//         else if(a!=(c-1) && b!=(c+1))
//         {
//             fl=false ;
//         }
//        }



        if(f==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
       }
    }
}


