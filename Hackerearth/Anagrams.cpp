#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
         char a[10000],b[10000];
        cin>>a;
        cin>>b;
        int c=0;
        for(int i=0;a[i]!='\0';i++)
        {
            for(int j=0;b[j]!='\0';j++)
            {
                if(a[i]==b[j])
                {
                    c++;
                    b[j]='0';
                    break;
                }
            }
        }
        cout<<strlen(a)+strlen(b)-2*c<<endl;
    }
}
