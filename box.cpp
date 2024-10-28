#include<iostream>
using namespace std;
int main()
{
    int t,i,k,j,l,sum = 0,rlt = 0;
    cin>>t;
    for(k = 1; k<= t; k++)
    {

        int n;
        cin>>n;
        int array[n];
        for(i = 0; i<n ; i++)
        {
            cin>>array[i];
        }
        int min = array[0];
        for(l = 1; l< n; l++)
        {
            if(min>array[l])
            {
                min = array[l];
            }

        }


        for(j = 0; j<n; j++)
        {
            if(array[j] == min)
                continue;
            else if(array[j]>min)
            {
                rlt =  array[j] - min;
            }

            sum = sum+rlt;

        }


        cout<<sum<<endl;
        sum = 0;


    }



    return 0;
}
