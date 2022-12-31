#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<long long> st;
    long long n=1,total=0,m=0;
    while(1)
    {
        for(long long i=1;i<=n;i++)
        {
            total=total+i;
        }
        //cout<<total<<endl;
        for(long long i=1;i<=total;i++)
        {
            if(total%i==0)
            {
                m++;
            }
        }
        cout<<m;
        cout<<endl;

        if(m>500)
            break;
        m=0;
        total=0;
        n++;
    }
    cout<<endl;
    cout<<total;
}
