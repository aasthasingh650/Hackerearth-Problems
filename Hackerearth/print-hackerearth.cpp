#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int h=0,a=0,c=0,k=0,e=0,r=0,t=0,min;
    char str[n];
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='h') h++;
        else if(str[i]=='a') a++;
        else if(str[i]=='c') c++;
        else if(str[i]=='k') k++;
        else if(str[i]=='e') e++;
        else if(str[i]=='r') r++;
        else if(str[i]=='t') t++;
    }
    min=h/2;
    if(a/2 < min) min=a/2;
    if(c < min) min=c;
    if(k < min) min=k;
    if(e/2 < min) min=e/2;
    if(r/2 < min) min=r/2;
    if(t < min) min=t;
    cout<<min;
}
