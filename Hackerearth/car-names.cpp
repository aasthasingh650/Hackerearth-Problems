#include <bits/stdc++.h>

using namespace std;



int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch[501];
        cin>>ch;
        int k = strlen(ch);
        if(k%3==0)
        {   
            int a=(int)ch[0];
            for(int i=0;i<k/3;i++)
            a^=(int)ch[i];
            int b=(int)ch[k/3];
            for(int i=k/3;i<2*k/3;i++)
            b^=(int)ch[i];
            int c=(int)ch[2*k/3];
            for(int i=2*k/3;i<k;i++)
            c^=(int)ch[i];
            if(a!=0)
            a ^= (int)ch[0];
            if(b!=0)
            b ^= (int)ch[k/3];
            if(c!=0)
            c ^= (int)ch[2*k/3];
            if(a==b and b==c and c==0 && ((int)ch[0]!=(int)ch[k/3] && (int)ch[0]!=(int)ch[2*k/3] && (int)ch[2*k/3]!=(int)ch[k/3] ) )
            cout<<"OK\n";
            else cout<<"Not OK\n";  
        }
        else cout<<"Not OK\n";
    }
}
