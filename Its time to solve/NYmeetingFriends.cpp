#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,mindis;
    set<int> s;
    cin>>x1>>x2>>x3;

    for(int i=1;i<=100;i++)
    {
        mindis=abs(x1-i)+abs(x2-i)+abs(x3-i);
        s.insert(mindis);
    }
    cout<<*s.begin();

}
