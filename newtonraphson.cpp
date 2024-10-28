#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001
double Function(double x)
{
    return x*x-3*x+2;
}
double derive_fucntion(double x)
{
    return 2*x-3;
}
int main()
{
    double x;
    cout<<" Enter initial assumed value : ";
    cin>>x;
    cout<<endl;
    double div=Function(x)/derive_fucntion(x);
    while(abs(div)>=EPSILON)
    {
        div=Function(x)/derive_fucntion(x);

        x=x-div;
    }
    cout<<" Root of the equation is : "<<x<<endl;
}
