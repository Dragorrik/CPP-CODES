#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<long long> s;
    long long n=2,k=1,m=0;

    for(long long i=2;i<=1000000;i++)
    {
        for(long long j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                m++;
            }
        }
        if(m==1)
        {
            s.insert(i);
        }
        if(s.size()==10001)
            break;
        m=0;
    }
    cout<<"Wait"<<endl;
    cout<<*--s.end()<<endl;

}

