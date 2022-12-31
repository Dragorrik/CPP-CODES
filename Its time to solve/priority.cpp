#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter n"<<endl;
    int n,i=0;
    cin>>n;
    int bt,pr,prio;
    int prArray[n],btArray[n],prioArray[n];
    vector<pair<int,pair<int,int>>> v;

    cout<<"Enter burst time,process id and priority"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>bt>>pr>>prio;
        v.push_back(make_pair(prio,make_pair(pr,bt)));
    }
    cout<<endl;
    cout<<"Before Sorting"<<endl;
    for(auto p:v)
    {
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    }
    cout<<endl;
    cout<<"After Sorting"<<endl;
    sort(v.begin(),v.end());
    for(auto p:v)
    {
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    }

    cout<<endl;

    for(auto p:v)
    {
        prioArray[i]=p.first;
        btArray[i]=p.second.second;
        prArray[i]=p.second.first;
        i++;
    }
    cout<<"priority"<<endl;
    for(int i=0;i<n;i++)
        cout<<prioArray[i]<<" ";

    cout<<endl;
    cout<<"Burst time"<<endl;
    for(int i=0;i<n;i++)
        cout<<btArray[i]<<" ";

    cout<<endl;
    cout<<"process id"<<endl;
    for(int i=0;i<n;i++)
        cout<<prArray[i]<<" ";

    cout<<endl;
    int ct[n];
    ct[0]=btArray[0];
    for(int i=1;i<n;i++)
    {
        ct[i]=btArray[i]+ct[i-1];
    }
    cout<<"Completion time"<<endl;
    for(int i=0;i<n;i++)
        cout<<ct[i]<<" ";

    cout<<endl;

    int tat[n],wt[n];
    cout<<"Turn around time"<<endl;
    for(int i=0;i<n;i++)
    {
        tat[i]=ct[i];
    }
    for(int i=0;i<n;i++)
    {
        wt[i]=tat[i]-btArray[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<tat[i]<<" ";
    }

    cout<<endl;
    cout<<"waiting Time"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<wt[i]<<" ";
    }

    cout<<endl;
    float total_tat=0,total_wt=0;
    for(int i=0;i<n;i++)
    {
        total_tat=total_tat+tat[i];
        total_wt=total_wt+wt[i];
    }
    cout<<"AVG waiting time: "<<total_wt/n<<endl;
    cout<<"AVG turn around time: "<<total_tat/n<<endl;

}



