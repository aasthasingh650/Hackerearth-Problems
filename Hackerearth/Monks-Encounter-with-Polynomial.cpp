#include <iostream>
#include<cmath>
using namespace std;
 
int main() 
{
    long T;
    cin>>T;
    while(T>0)
    {
        long double A,B,C,K;
        long double D,X1,X2;
        cin>>A>>B>>C>>K;
        D=sqrt(B*B-4*A*(C-K));
        X1=(-1*B-D)/(2*A);
        X2=(-1*B+D)/(2*A);
        if(X1>=0)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(X2>0)
        cout<<ceil(X2)<<endl;
        else cout<<"0"<<endl;
        
        /*if(X>0)
        cout<<"0";
        else
        {
            X=(-1*B+D)/(2*A);
            if(X>0)
            cout<<ceil(X);
            else cout<<"0";
        }
     */
 
        T--;
    }
}
