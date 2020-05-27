#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    if(T>0 && T<=100)
    {
        int N[T];
        char S[T][500];
        for(int i=0;i<T;i++)
        {
            cin>>N[i];
            for(int j=0;j<N[i];j++)
            cin>>S[i][j];
        }
        for(int i=0;i<T;i++)
        {
            if(N[i]>0 && N[i]<=500)
            {for(int j=0;S[i][j]!='\0';j++)
            {
                if(S[i][j]<=69)
                S[i][j]=67;
                else if(S[i][j]>=70 && S[i][j]<=72)
                S[i][j]=71;
                else if(S[i][j]>=73 && S[i][j]<=76)
                 S[i][j]=73;
                else if(S[i][j]>=77 && S[i][j]<=81)
                S[i][j]=79;
                else if(S[i][j]>=82 && S[i][j]<=86)
                S[i][j]=83;
                else if(S[i][j]>=87 && S[i][j]<94)
                S[i][j]=89;
                else if(S[i][j]>=94 && S[i][j]<=99)
                S[i][j]=97;
                else if(S[i][j]>=100 && S[i][j]<=102)
                S[i][j]=101;
                else if(S[i][j]>=103 && S[i][j]<=105)
                S[i][j]=103;
                else if(S[i][j]>=106 && S[i][j]<=108)
                S[i][j]=107;
                else if(S[i][j]>=109 && S[i][j]<=111)
                S[i][j]=109;
                else if(S[i][j]>=112 && S[i][j]<=127)
                S[i][j]=113;
            }}
        }
        for(int i=0;i<T;i++)
        {
            if(i!=0) cout<<endl;
            for(int j=0;j<N[i];j++)
            cout<<S[i][j];
        }
    }
}
// 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113
