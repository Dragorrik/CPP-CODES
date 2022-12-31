#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1,2};
    int i=0,j=1,c,total=0;
    while(1)
    {
        c=v.at(i)+v.at(j);
        if(c>4000000)
            break;
        v.push_back(c);
        i++;
        j++;
    }
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    for(auto itr=v.begin();itr!=v.end();itr++)
    {
        if(*itr%2==0)
            total=total+*itr;
    }
    cout<<total;
}
