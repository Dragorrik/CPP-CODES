#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=22,m=0;
    set<long long> st;


    while(1)
    {
        for(long long i=1;i<=20;i++)
        {
             if(n%i==0)
                 m++;
             else
                 continue;
        }
        if(m==20)
        {
            cout<<n<<endl;
            break;
        }
        else
        {
            n=n+1;
            m=0;
        }
    }


}
