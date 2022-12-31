#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    pair<int,int> c[n];

    for(int i=0;i<n;i++)
    {
        cin>>c[i].first>>c[i].second;
    }
  /*  for(auto val:c)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }*/

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[i].first==c[j].second)
            {
                m++;
            }
        }
    }

    cout<<m;
}
