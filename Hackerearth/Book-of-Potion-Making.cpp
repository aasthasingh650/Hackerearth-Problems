#include <iostream>

using namespace std;

int main() 
{
    long int C;
    cin>>C;
    int sum=0,i=10;
    while(C>0)
    {
        sum=sum + i*(C%10);
        i--;
        C=C/10;
        if(i==0) break;
    }
    if(sum%11==0 && i==0 && C==0) cout<<"Legal ISBN";
    else cout<<"Illegal ISBN";
}
