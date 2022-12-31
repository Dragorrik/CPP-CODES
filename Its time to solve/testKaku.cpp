#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter no:"<<endl;
    int n;
    cin>>n;
    cout<<"pro and burst"<<endl;
    int pr[n],bt[n];
    for(int i=0;i<n;i++)
    {
        cin>>pr[i]>>bt[i];
    }
    cout<<"quantum"<<endl;
    int quan;
    cin>>quan;
    int rembt[n];
    for(int i=0;i<n;i++)
        rembt[i]=bt[i];

    int wt[n],tat[n];
    int t=0;
    while(1)
    {
        bool done=true;
        for(int i=0;i<n;i++)
        {
            if(rembt[i]>0)
            {
                done =false;
                if(rembt[i]>quan)
                {
                   t=t+quan;
                   rembt[i]=rembt[i]-quan;
                }
                else
                {
                    t=t+rembt[i];
                    wt[i]=t-bt[i];
                    rembt[i]=0;
                }
            }
        }
        if(done==true)
            break;
    }
  for(int i=0;i<n;i++)
  {
      cout<<wt[i]<<" ";
  }
}

