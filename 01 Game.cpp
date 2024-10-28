//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        string str;
//        cin>>str;
//        int a,b,d,e,f,g;
////        map<char, int> freq;
////        for(char c : str)
////        {
////            if (c != ' ')
////            {
////                freq[c]++;
////            }
////        }
////
////        for(auto& pair : freq)
////        {
////
////            if(pair.first=='1')
////            {
////                a=pair.second;
////            }
////            else
////            {
////                b=pair.second;
////            }
////        }
//
//     int n = str.length();
//        for(int i=0; i<n; i++){
//            if(str[i] == '1')a++;
//            else b++;
//        }
//        e=min(a,b);
//        if(e==0 || e%2==0)
//        {
//          cout<<"NET"<<endl;
//        }
//        else
//        {
//             cout<<"DA"<<endl;
//        }
//
//
//    }
//}
#include<iostream>


#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
    cin>>t;
    while(t--){
        int one = 0, zero = 0;
        string s;
        cin>>s;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i] == '1')one++;
            else zero++;
        }
        int turn = min(zero,one);
        if(turn == 0 || turn%2 == 0){
            cout<<"NET\n";
        }
        else
            cout<<"DA\n";
    }



return 0;
}
