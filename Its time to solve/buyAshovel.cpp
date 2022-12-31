#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,i=1,m=1,c;
    cin>>k>>r;

    while(1)
    {
        c=k*i;
        if(c%10==0||c%10==r)
        {
            cout<<m;
            break;
        }
        else
        {
            m++;
            i++;
        }
    }

}
