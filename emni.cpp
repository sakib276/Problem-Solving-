#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;

    while(t--)
    {
        int n,flag = 1;
        cin>>n;
        int arr[n];
        for( i = 0; i<n; i++)
        {
            cin>>arr[i];
        }

       for(i = 0;i<(n-2);i++){
        if(arr[i]%2 == 0 && arr[i+2] % 2 != 0 )
            flag = 0;
        if(arr[i]%2 == 1 && arr[i+2] %2 != 1)
            flag =0;
       }
       if(flag)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }


    return 0 ;
}
