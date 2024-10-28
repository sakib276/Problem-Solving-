#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>v1(n);
        vector<int>v2(n);

        for(auto &a : v1)
            cin>>a;

        for(auto &a : v2)
            cin>>a;

        int sum=0;
       // int k=n;
        int j=n-1;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        for(int i=0;i<n;i++)
        {
            if(k>0)
            {
               if(v1[i]<v2[j])
            {
                sum=sum+v2[j];
                j--;
            }
            else
            {
                sum=sum+v1[i];
            }
            k--;
            }
            else
            {
                sum=sum+v1[i];
            }

        }

        cout<<" Ans is : "<<sum<<endl;

    }
}
