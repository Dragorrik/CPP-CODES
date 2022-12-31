#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<long long> s;
    long long n,i=2,total=0;
    cin>>n;
    while(1)
    {
        if(n%i==0)
        {
            s.insert(i);
            n=n/i;
            if(n==1)
                break;
        }
        else
        {
            i++;
        }

    }
    i=2;
    for(auto val:s)
        cout<<val<<" ";
    cout<<endl;

    cout<<*s.rbegin();


}
