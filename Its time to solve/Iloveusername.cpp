#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,mark,i,j,m=0,n=0,amazing=0;
    vector<int> v;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>mark;
        v.push_back(mark);
    }

    for(i=1;i<v.size();i++)
    {
        for(j=0;j<i;j++)
        {
           if(v.at(i)>v.at(j))
           {
               m++;
           }
           else if(v.at(i)<v.at(j))
           {
               n++;
           }
           else if(v.at(i)==v.at(j))
           {
               m=1;
               n=1;
               break;
           }
        }
        if(m==0||n==0)
        {
           amazing++;
        }
        m=0;
        n=0;
    }

    cout<<amazing;
}
