#include <bits/stdc++.h>
#define l long
#define F first
#define S second
#define PB push_back
#define FOR(i,l,r) for(long i=l;i<r;i++)

using namespace std;

int main()
{
	int n;
    cin>>n;
    int a[n],max=1,min=100,b[101];
    FOR(i,0,n)
    {
        cin>>a[i];
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
        b[a[i]]=1;
    }
    FOR(i,min,max+1)
    {
        if(b[i]!=1)
        {cout<<"NO"; return 0;
        }
    }
    cout<<"YES";
}
