#include <bits/stdc++.h>
using namespace std;

int countRect(int n) 
{ 
    int ans = 0; 
    for (int length = 1; length <= sqrt(n); ++length) 
    for (int height = length; height*length <= n; ++height) 
            // height >= length is maintained 
        ans++; 
    return ans; 
} 
int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<countRect(n)<<endl;
    }
}