#include <bits/stdc++.h>
#define ll long
#define F first
#define S second
#define PB push_back
#define f(i,l,r) for(long i=l;i<r;i++)

using namespace std;

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        ll K,A[7],num=0,sum;
        string s[7] = {"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
        cin>>K;

        f(j,0,7)
        {
        cin>>A[j];
        num += A[j];
        }

        ll p = K/num;
        sum = num*p;
        int i=6;
        if(sum == K)
        {
            f(j,0,7)
            {
                if(A[j]!=0)
                i = j;
            }
        }
        else 
        while(sum<K)
        {
            i = (i+1)%7;
            sum += A[i];
        }
        cout<<s[i]<<endl;
    }
}
