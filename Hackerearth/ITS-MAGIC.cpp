#include <iostream>

using namespace std;

int main()
{
    long n,ans,id=-1,r,s=0;
    cin>>n;
    long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    r=s%7;
    ans=s;
    for(int i=0;i<n;i++)
    {
        if(r==a[i]%7 && ans>a[i])
        {
            ans=a[i];
            id=i;
        }
    }
    cout<<id;
}
