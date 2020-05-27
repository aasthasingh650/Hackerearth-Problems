#include <iostream>

using namespace std;

int main()
{
    int L,N;
    cin>>L>>N;
    if(L>0 && L<=10000 && N>0 && N<=1000)
    {
        int W[N],H[N];
        for(int i=0;i<N;i++)
        cin>>W[i]>>H[i];
    
        for(int i=0;i<N;i++)
        {
            if(W[i]<L || H[i]<L)
            cout<<"UPLOAD ANOTHER\n";
            else if(W[i]==H[i])
            cout<<"ACCEPTED\n";
            else cout<<"CROP IT\n";
        }
    }
}
