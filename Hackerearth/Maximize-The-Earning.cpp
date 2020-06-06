#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long

using namespace std;

int main()
{
    int s;
    cin>>s;
    while(s--){
	int n,r;
    cin>>n>>r;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans = 1, max = a[0];
    for(int i=1;i<n;i++)
    {
        if(max < a[i])
     {   max = a[i];
        ans++;
    }
    }
    cout<<ans*r<<"\n";
}
}
