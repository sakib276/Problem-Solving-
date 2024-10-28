//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//
//    int t; cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//
//        string up, down;
//        cin >> up >> down;
//
//        int cn1 = 0, cn2 = 0, cn3;
//        for (int i = 0; i < n; i++) {
//            if (up[i] == '0' && down[i] == '1')
//                cn1++;
//            else if (up[i] == '1' && down[i] == '0')
//                cn2++;
//        }
//
//        cn3 = min(cn1, cn2);
//        cn1 -= cn3;
//        cn2 -= cn3;
//
//        cout << cn1 + cn2 + cn3 << endl;
//    }
//
//}

#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
 return x * x - 4*x - 10 ;
}
double secantMethod(double x1, double x2)
{
    double x3;
    int i=1 ;
    do
    {
        x3 = x2 - ((f(x2) * (x2 - x1)) / (f(x2) - f(x1)));
        if (abs(x3 - x2) <= 0.001)
            return x3;

        x1 = x2;
        x2 = x3;
 i++ ;
    }
    while (1);
}
int main()
{
    double x1, x2, epsilon;

    cout<<setw(10)<<"Using Secent Method : \n" ;
    cout<< "\tThe Equation is = x^2 -4^x -10 = 0 \n";
    cout << "Enter first initial guess (x1): ";
    cin >> x1;
     cout << "Enter second initial guess (x2): ";
    cin >> x2;


    double root = secantMethod(x1, x2);
 cout << "\n\tRoot of the equation: " << root << endl;
 return 0;
}


