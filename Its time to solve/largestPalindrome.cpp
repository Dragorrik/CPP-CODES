#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<long long> st;
    long long rn = 0,a=10, remainder;

    for(long long i=999;i>=100;i--)
    {
        for(long long j=999;j>=100;j--)
        {
            long long k=i*j;
            while(k!=0)
                {
                    remainder = k % a;
                    rn = rn * a + remainder;
                    k/=a;
                }
                k=i*j;
               // cout<<k<<" "<<rn<<endl;
                if(k==rn)
                    st.insert(k);
                rn=0;

        }

    }

   cout<<*--st.end();


}
