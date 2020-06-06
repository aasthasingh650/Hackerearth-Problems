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
        int n,k,l=0;
        cin>>n>>k;
        int A[n],B[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            cin>>B[i];
            if(B[i]>l)
            l = B[i];
        }
        l++;
        long long p = 0;
        for(int i=0;i<n;i++)
        {
            if(A[i]<l)
            {
                p = p + k*(l-A[i]);
            }
        }
        cout<<p<<'\n';
    }
}
