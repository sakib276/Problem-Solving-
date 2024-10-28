#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[101];
    char cpy[101];
    int c=0;
    int k;
    gets(str);
    gets(cpy);
    int len=strlen(str);

    for(int i=0; i<len; i++)
    {
        k=(str[i]-cpy[i]);

        if(k!=0 && k!=32 && k!= -32 )
        {
            if((str[i]>='a' && str[i]<='z') && (cpy[i]>='a' && cpy[i]<='z') )
            {
                if(k>0)
                {
                    c=1;
                    break;
                }
                else
                {
                    c=-1;
                    break ;
                }
            }
            if((str[i]>='A' && str[i]<='Z') && (cpy[i]>='A' && cpy[i]<='Z') )
            {
                if(k>0)
                {
                    c=1;
                    break;
                }
                else
                {
                    c=-1;
                    break ;
                }
            }
            if((str[i]>='a' && str[i]<='z') && (cpy[i]>='A' && cpy[i]<='Z') )
            {
                k=k-32;
                if(k>0)
                {
                    c=1;
                    break;
                }
                else
                {
                    c=-1;
                    break ;
                }
            }
            if((str[i]>='A' && str[i]<='Z') && (cpy[i]>='a' && cpy[i]<='z') )
            {
                k=k+32;
                if(k>0)
                {
                    c=1;
                    break;
                }
                else
                {
                    c=-1;
                    break ;
                }
            }

        }
    }
    cout<<c<<endl;
    return 0;
}
