#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j=0,m=0;
    string s1,s2,s3,cm;
    cin>>s1;
    cin>>s2;
    cin>>cm;
    for(int i=0;i<s1.size();i++)
    {
        s3=s3+s1[i];
    }
    for(int i=s1.size();i<((s1.size())+(s2.size()));i++)
    {
        s3=s3+s2[j];
        j++;
    }
    //cout<<s3<<endl;
    sort(s3.begin(),s3.end());
    sort(cm.begin(),cm.end());
    //cout<<s3<<" "<<cm<<endl;
    if(s3.size()>cm.size() || s3.size()<cm.size())
    {
        cout<<"NO";
    }
    else
    {
        for(int i=0;i<s3.size();i++)
        {
            if(s3[i]==cm[i])
            {
                m++;
            }
        }
        if(m==s3.size())
        cout<<"YES";
        else
        cout<<"NO";
    }


}
