#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a,b,c,d,q;
        int cnt=0;

        bool f=false;
        map<char, int> frequencyMap;
        for (char ch : s)
        {
            if (ch != ' ')   // Optionally ignore spaces
            {
                frequencyMap[ch]++;
            }
        }

        for (const auto& pair : frequencyMap) {
       // cout << "Character '" << pair.first << "' occurs " << pair.second << " times." << endl;
        if(pair.first!='?')
        {
            f=true;
            if(pair.second>=n)
            {
                cnt=cnt+n;
            }
            else
            {
                cnt=cnt+pair.second;
            }
        }

    }
    if(f)
    {
        cout<<" ans is : "<<cnt<<endl;
    }
    else
    {
        cout<<" ans is : "<<0<<endl;
    }

    }
}
