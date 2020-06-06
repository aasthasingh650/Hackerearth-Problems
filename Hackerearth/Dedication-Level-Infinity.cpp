#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    char ch[n][11];
    int T[n];
    map<int,string>ma;
    for(int i=0;i<n;i++)
    {cin>>ch[i]>>T[i];
    ma[T[i]]=ch[i];}
    map<int,string>::iterator it=ma.end();
    for(int i=0;i<3;i++)
    {   it--;
        cout<<it->second<<"\n";
    }
}
