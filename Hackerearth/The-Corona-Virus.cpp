#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long
#define PB push_back

using namespace std;

int main()
{
	ll N,p=0;
    cin>>N;
    vector<bool>v;
    while(N>0)
    {
        v.PB(N%2);
        if(N%2)
        p++;
        N /= 2;
    }
    cout<<"YES\n"<<p<<"\n";
    FOR(i,0,v.size())
    if(v[i]) cout<<i<<" ";
}
