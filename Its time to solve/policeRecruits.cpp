#include<bits/stdc++.h>
using namespace std;

int main()
{
    int crimes,data,total=0,m=0;
    vector<int> v;
    cin>>crimes;

    for(int i=0;i<crimes;i++)
    {
        cin>>data;
        v.push_back(data);
    }

    for(int i=0;i<v.size();i++)
    {
        if(v.at(i)==-1)
        {
            if(total==0)
            {
                m++;
            }
            else
            {
                total=total-1;
            }
        }
        else
        {
            total=total+v.at(i);
        }
    }
    cout<<m;
}
