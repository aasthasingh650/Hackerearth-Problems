#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,l=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector <int> v;
    for(int i=n-1;i>=0;i--)
    {if(a[i]>=l)
    {
        l = a[i];
        v.push_back(l);
    }}
    for(int i=v.size()-1;i>=0;i--)
    cout<<v[i]<<" ";
}
