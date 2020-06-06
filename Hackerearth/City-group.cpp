#include <bits/stdc++.h>
#define f(i,l,r) for(long i=l;i<r;i++)

using namespace std;

int main()
{
	int n,k;
        cin>>n>>k;
        int A[n+1];
        f(i,0,k)
        {
            int p,o;
            cin>>p;
            f(j,0,p)
            {
                cin>>o;
                A[o] = i+1;
            }
        }
        int q,l,r;
        cin>>q;
        f(i,0,q)
        {
            cin>>l>>r;
            cout<<min(k-abs(A[l]-A[r]),abs(A[l]-A[r]))<<"\n";
        }
}
