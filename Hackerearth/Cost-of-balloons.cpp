#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    if(T>0 && T<=10)
    {
    int P[T],G[T],n[T],min[T],max[T],cp1[T],cp2[T];
    for(int i=0;i<T;i++)
    {
        cin>>G[i]>>P[i];
        cin>>n[i];
        if(n[i]>0 && n[i]<=10)
        {
        int p1[n[i]],p2[n[i]];
        min[i]=(G[i]>P[i])?P[i]:G[i];
        max[i]=G[i]+P[i]-min[i];
        cp1[i]=0,cp2[i]=0;
        for(int k=0;k<n[i];k++)
        {
            cin>>p1[k]>>p2[k];
            if(p1[k]==1) cp1[i]++;
            if(p2[k]==1) cp2[i]++;
        }
        }
    }
    
    for(int i=0;i<T;i++)
    {
        if(i!=0) cout<<endl;
        int s=(cp1[i]>cp2[i])?cp2[i]:cp1[i];
        int m=cp1[i]+cp2[i]-s;
        cout<<m*min[i]+s*max[i];
    }
    
    }
}
