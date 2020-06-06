#include <bits/stdc++.h>
#define FOR(i,l,r) for(long i=l;i<r;i++)
#define ll long long

using namespace std;

int main()
{
	int n,a;
    cin>>n;
    vector<int>C,I;
    long long p = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        C.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        I.push_back(a);
    }
    int k = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-k;j++)
        {
            if(I[i]==C[j])
            {
                p += j+1;
                vector<int>K;
                for(int i=j+1;i<C.size();i++)
                K.push_back(C[i]);
                for(int i=0;i<j;i++)
                K.push_back(C[i]);
                C.clear();
                C = K;
                k++;
                continue;
            }
        }
    }
    cout<<p;
}
