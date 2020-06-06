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
        string s;
        cin>>s;
        long n = s.length();
        int A[n];
        for(long i=0;i<n;i++)
        A[i] = (int)s[i] - 48;
        sort(A,A+n);
        int i = 0;
        for(i;i<n-1;i++)
        {
            if(A[i]!=A[i+1]-1)
            {
                cout<<"NO\n";
                break;
            }

        }
        if(i==n-1)
        cout<<"YES\n";
    }
}
