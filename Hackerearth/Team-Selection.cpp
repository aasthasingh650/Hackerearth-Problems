#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long

using namespace std;

int main()
{
	int n;
    cin>>n;
    int A[n],B[n],C[n];
    long c=0;
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
        C[i]=0;
    }
    sort(B,B+n);
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            if(B[k]>A[i])
            C[i]++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]<A[j])
            {
                c += C[j];
            }
        }
    }
    cout<<c;
}
