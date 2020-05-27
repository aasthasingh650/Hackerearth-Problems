#include <iostream>

using namespace std;

int main()
{
    int N,i=1;
    cin>>N;
    while(N>3*i)
    {   
        N=N-3*i;
        i++;
    }
    if(N>i)
    cout<<"Motu";
    else cout<<"Patlu";
}
