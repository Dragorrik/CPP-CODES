#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long total=0;

    for(long long i=1;i<=100;i++)
    {
        total=total+i;
    }
    long long ts=total*total;
    total=0;
    for(long long i=1;i<=100;i++)
    {
        total=total+(i*i);
    }
    long long st=total;

    long long diff=ts-st;
    cout<<diff;
}
