#include <iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int N,Q,l,q=0;
    cin>>N>>Q;
    int arr[N];
    string S[Q];
    char Qu[6];
    for(int i=0;i<N;i++)
    cin>>arr[i];
    while(Q>0)
    {
        cin.getline(Qu,8,'\n');
        l=strlen(Qu);
        if(Qu[0]=='1')
        {
            if(arr[(int)Qu[2]-49]==0)
            arr[(int)Qu[2]-49]=1;
            else arr[(int)Qu[2]-49]=0;
            cout<<arr[(int)Qu[2]-49]<<endl;
        }
        else
        {   int sum=0;
            int L=Qu[2]-48;
            int R=Qu[4]-48;
            cout<<"L "<<L<<endl<<"R "<<R<<endl;
            int c=R-L;
            while(c>=0)
            {
                sum+=pow(2,c)*arr[L-1];
                c--;
                L++;
            }
            if(sum%2!=0) S[q++]="ODD";
            else S[q++]="EVEN";
            cout<<endl<<sum<<endl;
        }
        --Q;
    }
    for(int i=0;i<q;i++)
    {
        if(i!=0)
        cout<<endl;
        cout<<S[i];
    }
    
}
