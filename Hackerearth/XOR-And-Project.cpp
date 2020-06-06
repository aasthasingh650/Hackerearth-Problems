#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long
#define PB push_back
using namespace std;

long dec(vector<int>v)
{
    long p = 1;
    long s=0;
    FOR(i,0,v.size()) 
    {
        s += p*v[i];
        p *= 2;
    }
    return s;
}

int main()
{
    long k;
	vector <int> v;
    cin>>k;
    while(k>0)
    {
        v.PB(k%2);
        k = k/2;
    }
    int p=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        p = p^v[i];
        v[i] = p;
    }
    cout<<dec(v);
}
