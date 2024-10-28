#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int n);
int main()
{


        int n;
       cin>>n;
       int cnt=0;
       vector<int>arr(n);
       for(auto& a: arr)
        cin>>a;

       for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                cnt++;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                 cout<<arr[i]<<" ";
            }
            else
            {
                 cout<<arr[i]<<endl;
            }


        }


    cout<<cnt<<endl;


}

