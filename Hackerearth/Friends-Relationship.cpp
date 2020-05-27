#include <iostream>
 
using namespace std;
 
int main() 
{
    int T;
    cin>>T;
    int N,c=0;
    while(T--)
    {
        cin>>N;
          for(int i=0;i<N;i++)
            { 
            for(int j=0;j<=i;j++)
               cout<<"*";
            for(int j=2*(N-1);j>2*i;j--)
                cout<<"#";
            for(int j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;    
            }
           cout<<endl;
    }   
        
    return 0;
}
