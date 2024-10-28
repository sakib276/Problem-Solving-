#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int mid=(n-1)/2;
    int ans=0;
    for(int i=0,j=0;i<n,j<n;i++,j++)
    {
       ans=ans+arr[i][j];
       arr[i][j]=0;
    }
    for(int i=n-1,j=0;i>=0,j<n;i--,j++)
    {
        ans=ans+arr[i][j];
        arr[i][j]=0;

    }
    for(int i=0;i<n;i++)
    {
        ans=ans+arr[mid][i];
        arr[mid][i]=0;
    }
    for(int i=0;i<n;i++)
    {
        ans=ans+arr[i][mid];
        arr[i][mid]=0;
    }
    cout<<ans<<endl;
}
