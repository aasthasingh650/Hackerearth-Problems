#include <iostream>

using namespace std;

int main()
{
   int n,i=0;
    while(1)
    {
        cin>>n;
        if(n==42)
         break;
        else 
        {
            if(i!=0) cout<<endl;
            cout<<n;
            i=1;
        }
    }
}
