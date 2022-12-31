#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,5,10,20,100};
    int n,m=0;
    cin>>n;
    for(int i=4;i>=0;i--)
    {
        int vagfol=n/a[i];
        m=m+vagfol;
        n=n%a[i];
    }
    cout<<m;
}
