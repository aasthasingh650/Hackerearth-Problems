#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int a,b,c,s;
    while(q--)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            arr[b]=c;
        }
        else
        {   s=0;
            for(int i=b; i<c+1; i++)
            s+=arr[i];
            cout<<s<<endl;
        }
    }
}
