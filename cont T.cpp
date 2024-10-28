

#include<bits/stdc++.h>
using namespace std;

int main()
{
   // cout<<" Enter Number of elements you want to insert : ";
    int n;
    cin>>n;
    //cout<<endl;

    vector<int>v(n);
   // cout<<" Enter elements of the list : ";
    for(auto& a: v)
        cin>>a;


    int key;
    int j;
    for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                 cout<<v[i]<<" ";
            }
            else
            {
                 cout<<v[i]<<endl;
            }


        }
    for(int i=1;i<n;i++)
    {
        key=v[i];
        j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=key;

         for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                 cout<<v[i]<<" ";
            }
            else
            {
                 cout<<v[i]<<endl;
            }


        }
    }
 //   cout<<endl<<" After insertion operation list is : ";




}
