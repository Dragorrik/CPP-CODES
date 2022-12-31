#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,rt,ttc=0,m=0;
    cin>>n>>k;

    rt=240-k;

    for(int i=1;i<=n;i++)
    {
        ttc=ttc+(i*5);
        if(rt-ttc>=0)
        {
            m++;
        }
        else
            break;

    }
    cout<<m;
}
