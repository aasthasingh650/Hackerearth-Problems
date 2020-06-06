#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long

using namespace std;

int main()
{
	int n,x;
    cin>>n>>x;
    int a[n],l=0,p=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=x && p<=1)
        l++;
        else p++;
    }
    cout<<l;
}
