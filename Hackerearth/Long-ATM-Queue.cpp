#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int n;
    cin>>n;
    int A[n];
    cin>>A[0];
    int g = 1;
    for(int i=1;i<n;i++)
    {
        cin>>A[i];
        if(A[i-1]>A[i])
        g++;
    }
    cout<<g;
}
