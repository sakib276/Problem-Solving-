#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ans;
        long long int a=2;
        //long long int i=1;
        for(int i=2;i<=30;i++)
        {
            ans=pow(2,i)-1;
            if(n%ans==0)
            {
                cout<<" ans is : "<<n/ans<<endl;
                break ;
            }

        }




    }
}
