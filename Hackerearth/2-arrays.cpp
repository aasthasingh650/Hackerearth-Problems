#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m1=0,m2=0;
    cin>>n;
    int a1[n],a2[n],s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
        if(a1[i]==-1)
        m1++;
        s1+=a1[i];
    }
    s1 += m1;
    for(int i=0;i<n;i++)
    {
        cin>>a2[i];
        if(a2[i]==-1)
        m2++;
        s2+=a2[i];
    }
    s2 += m2;
    if(m1==0)
    {
        if(m2==1)
        {
            if(s1<s2)
            cout<<"0";
            else cout<<"1";
        }
        else{
            if(s1<s2)
            cout<<"0";
            else cout<<s1-s2+1;
        }
    }
    else if(m2==0)
    {
        if(m1==1)
        {
            if(s1>s2)
            cout<<"0";
            else cout<<"1";
        }
        else{
            if(s1>s2)
            cout<<"0";
            else cout<<s2-s1+1;
        }
    }
    else
    cout<<"Infinite";   
}
