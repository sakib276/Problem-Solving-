#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        int ans=0;
        int key,j;
        for(int i=0; i<n; i++)
        {
             cin>>arr[i];
        }


        for(int i=1; i<n; i++)
        {
             key=arr[i];
            j=i-1;
            while(j>=0 && key<arr[j])
            {
                arr[j+1]=arr[j];
                j--;
                ans++;
            }
            arr[j+1]=key;
        }
        cout<<"Minimum exchange operations : "<<ans<<endl;
    }
}
