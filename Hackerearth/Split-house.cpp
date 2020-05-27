
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=1 && n<=20)
    {
        char str[n];
        cin>>str;
        for(int i=0;str[i]!='\0';i++)
        {
          if(str[i]=='H' && str[i+1]=='H')
         { cout<<"NO";
          return 0;
         }
        } 
        cout<<"YES"<<endl;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='H') cout<<str[i];
            else cout<<"B";
        }
    }
    return 0;
}
