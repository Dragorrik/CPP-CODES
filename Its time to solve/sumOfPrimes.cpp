#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<unsigned int> st;
   unsigned int m=0,total=0;
    cout<<"WAIT"<<endl;

    for(unsigned int i=2;i<=2000000;i++)
    {
        for(unsigned int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                m++;
            }
        }
        if(m==1)
        {
            total=total+i;
        }

        m=0;
    }
    cout<<total;

}


