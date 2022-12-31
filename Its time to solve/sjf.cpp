#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter n"<<endl;
    int n,i=0;
    cin>>n;
    int art,bt,pr;
    int artArray[n],btArray[n],prArray[n];
    vector<pair<int,pair<int,int>>> v;

    cout<<"Enter Arrival time,burst time and process id"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>art>>bt>>pr;
        v.push_back(make_pair(art,make_pair(bt,pr)));
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
        artArray[i]=p.first;
        btArray[i]=p.second.first;
        prArray[i]=p.second.second;
        i++;
    }
    cout<<"Arrival time"<<endl;
    for(int i=0;i<n;i++)
        cout<<artArray[i]<<" ";

    cout<<endl;
    cout<<"Burst time"<<endl;
    for(int i=0;i<n;i++)
        cout<<btArray[i]<<" ";

    cout<<endl;
    cout<<"process id"<<endl;
    for(int i=0;i<n;i++)
        cout<<prArray[i]<<" ";

    cout<<endl;
    int ct[n],t=0;
    ct[0]=artArray[0]+btArray[0];

    for(int i=1;i<n;i++)
    {
        if(artArray[i]>ct[i-1])
        {
            ct[i]=btArray[i]+artArray[i];
            continue;
        }
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
        tat[i]=ct[i]-artArray[i];
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



}

