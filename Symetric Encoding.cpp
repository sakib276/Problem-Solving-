//
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n;
//        cin>>n;
//
//        string str ;
//        cin>>str;
//
//        vector<char> v;
//
//        map<char,char>vp;
//        for (char c : str)
//        {
//            if (find(v.begin(), v.end(), c) == v.end())
//            {
//                v.push_back(c);
//            }
//        }
//        int sz=v.size();
//        sort(v.begin(),v.end());
//        for(int i=0; i<v.size(); i++)
//        {
//            vp[v[i]]=v[sz-i-1];
//        }
//
//        for(int i=0; i<n; i++)
//        {
//            cout<<vp[str[i]];
//        }
//        cout<<endl;
//    }
//
//
//    return 0;
//}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to remove duplicates from a vector
//void removeDuplicates(vector<char> &vec) {
//    sort(vec.begin(), vec.end()); // Sort the vector
//    vec.erase(unique(vec.begin(), vec.end()), vec.end()); // Remove duplicates
//}

int main() {
    string str ;
    cin>>str;
    vector<char> uniqueChars;

    // Extract unique characters from the string
    for (char c : str) {
        if (find(uniqueChars.begin(), uniqueChars.end(), c) == uniqueChars.end()) {
            uniqueChars.push_back(c);
        }
    }

    // Optionally, remove duplicates from the vector
    //removeDuplicates(uniqueChars);

    // Print the unique characters
    cout << "Unique characters: ";
    for (char c : uniqueChars) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
