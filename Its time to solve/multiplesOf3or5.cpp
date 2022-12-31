#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a=3,b=5,ans=0,ans2=0,c,i=1;
    while(1)
    {
        c=a*i;
        if(c>=1000)
            break;
        ans=ans+c;
        i++;
    }
    i=1;
    while(1)
    {
        c=b*i;
        if(c>=1000)
            break;
        ans2=ans2+c;
        i++;
    }
    long long lcm=(a*b)/__gcd(3,5);
    int ans3=lcm*(((1000/lcm)*((1000/lcm)+1))/2);

    cout<<ans+ans2-ans3;
}
