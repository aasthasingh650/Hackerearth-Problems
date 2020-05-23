#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--)
    {
        ll l,r,s;
        cin>>l>>r>>s;
        if((ll)ceil((double)l/s) > (ll)floor((double)r/s))
        cout<<"-1 -1"<<endl;
        else{
            cout<<(ll)ceil((double)l/s)<<" "<<(ll)floor((double)r/s)<<endl;
        }
    }
}