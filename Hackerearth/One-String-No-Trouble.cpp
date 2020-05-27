#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int m=1,j=0,l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]==s[i-1] and i>0)
        j = i;
        else if(s[i]==s[i+1])
        m = max(m,i-j+1);
    }
    m = max(l-j,m);
    cout<<m;
}
