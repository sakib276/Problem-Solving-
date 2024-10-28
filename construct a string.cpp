#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        int j=97;
        int test=0;
        vector<char>ch;

        while(true)
        {
        for(int i=0; i<b; i++)
        {
            test=ch.size();
            if(test<n)
            {
               ch.push_back((char)j);
            j++;
            }
            else
            {
                break;
            }


        }
       test=ch.size();
        if(test<n)
            {
              test=ch.size();
        j=97;
            }
            else
            {
                break;
            }

        }


        stringstream ss;

        for (int i = 0; i < ch.size(); ++i)
        {
            ss << ch[i];
        }

        string result = ss.str();
        cout<<result<<endl;


    }
}
