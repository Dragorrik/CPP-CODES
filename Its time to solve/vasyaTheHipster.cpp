#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ds,ss;
    cin>>a>>b;

    while(1)
    {
        if(a>b)
        {
            ds=b;
            ss=(a-b)/2;
        }
        else if(b>a)
        {
            ds=a;
            ss=(b-a)/2;
        }
        else
        {
            ds=a;
            ss=(a-b)/2;
        }

        cout<<ds<<" "<<ss;
        break;
    }
}
