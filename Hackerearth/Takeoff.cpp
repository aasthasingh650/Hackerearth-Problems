#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long

using namespace std;

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int n,p,q,r, c = 0;
        cin>>n>>p>>q>>r;
        int A[n];
        for(int i=0;i<n;i++)
        {
            A[i] = 0;
            if((i+1)%p == 0)
            A[i]++;
            if((i+1)%r == 0)
            A[i]++;
            if((i+1)%q == 0)
            A[i]++;
            if (A[i] == 1 )
            c++;
        }
        cout<<c<<"\n";
        
    }
}
