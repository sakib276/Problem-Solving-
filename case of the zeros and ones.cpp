#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 string str;
 cin>>str;
 int a,b;
 int x,y,z;
 map<char, int> freq;

    for(char c : str) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    for(auto& pair : freq) {
       if(pair.first==0)
       {
           a=pair.second;
       }
       else
       {
           b=pair.second;
       }
    }
    if(a==b)
    {
        cout<<0<<endl;
    }
    else
    {
        x=min(a,b);
        y=x+x;
        z=abs(n-y);
        cout<<z<<endl;

    }

}
