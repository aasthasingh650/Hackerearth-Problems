#include <iostream>

using namespace std;

int main() 
{
    int T,N,i=0;
    cin>>T;
    int S[T];
    string seat[T];
    while(T>0)
    {
        cin>>N;
        if(N%6==0 || N%6==1)
        seat[i]="WS";
        if(N%6==2 || N%6==5)
        seat[i]="MS";
        if(N%6==3 || N%6==4)
        seat[i]="AS";
        
        if(N%12<=6 && N%12!=0)
        S[i]=N+2*(6-(N%12))+1;
        else if(N%12==0)
        S[i]=N-11;
        else S[i]=N-2*(N%6)+1;
        i++;
        T--;
    }
    for(N=0;N<i;N++)
    cout<<S[N]<<" "<<seat[N]<<endl;
}
