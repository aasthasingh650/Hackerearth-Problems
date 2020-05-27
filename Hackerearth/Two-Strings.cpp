
#include <iostream>
#include<cstring>

using namespace std;
int main()
{
    int a1[26];
    char a[100000],b[100000];
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        if(strlen(a)==strlen(b))
        {
            for(j=0;j<26;j++)
                a1[j]=0;
            for( j=0;j<strlen(a);j++)
            {
                a1[a[j]-'a']++;
                a1[b[j]-'a']--;
            }
            for(j=0;j<26;j++)
                if(a1[j]!=0)
                break;
            if(j==26)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
return 0;
}

