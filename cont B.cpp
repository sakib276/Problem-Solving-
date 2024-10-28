
#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int n);
int main()
{

    int n;
    cin>>n;
    BubbleSort(n);
    cout<<endl;
}
void BubbleSort(int n)
{int temp;
    cout<<" Enter Element to the list : ";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];



    cout<<endl<<endl;
    cout<<" Before sorting operation the list we get :  ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"  ";

    cout<<endl<<endl;
    for(int i=0;i<n-1;i++)
    {

        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<" After Sorting operation the list we get  :  ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"  ";

    cout<<endl<<endl<<endl;
}
