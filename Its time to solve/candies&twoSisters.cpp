#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<long long> v;
   long long t,n;
    cin>>t;

    for(long long i=0;i<t;i++)
    {
        cin>>n;
        v.push_back(n);
    }

    for(long long i=0;i<t;i++)
    {
        if(v.at(i)==1 || v.at(i)==2 || v.at(i)==0)
            cout<<0<<endl;
        else
        {
            if(v.at(i)%2==0)
                cout<<(v.at(i)/2)-1<<endl;
            else
                cout<<(v.at(i)/2)<<endl;
        }

    }
}
