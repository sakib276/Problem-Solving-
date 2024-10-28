
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int ans=0;
    int len=str.size();
    int a,b,c,d;
    char ch='a';


    for(int i=0;i<len;i++)
    {

    a=abs(ch-str[i]);
    b=abs(26-a);
    ans=ans+min(a,b);
    ch=str[i];


    }
    cout<<ans<<endl;
}
