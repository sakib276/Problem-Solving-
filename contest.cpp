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
        int x;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            vec.push_back(x);
        }

        map<int, int> frequencyMap;
        for (int elem : vec)
        {

            if (frequencyMap.find(elem) != frequencyMap.end())
            {
                frequencyMap[elem]++;
            }

            else
            {
                frequencyMap[elem] = 1;
            }
        }
        int cnt=0;
        int c;
        for (const auto& pair : frequencyMap)
        {
            if(pair.second>=3)
            {
                c=pair.second/3;
                cnt=cnt+c;
            }
        }
        cout<<" ans is : "<<cnt<<endl;

    }
}
