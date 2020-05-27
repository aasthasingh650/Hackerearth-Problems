#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        char str1[100000];
        cin>>str1;
        int m=strlen(str1);
        for(int i=0; i<m; i++)
        {
            int ascii=((int)str1[i] + (int)str1[m-i-1] -2*96)%26;
            if(ascii==0)
            ascii=122;
            else
            ascii+=96;
            cout<<(char)ascii;
        }
        cout<<endl;
    }
}
