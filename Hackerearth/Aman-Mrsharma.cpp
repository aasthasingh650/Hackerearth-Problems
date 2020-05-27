#include <iostream>

using namespace std;

int main()
{
    int d;
    cin>>d;
    if(d>0 && d<=100000)
    {
       long int r[d],x[d],c=0;
        long double di[d];
        for(int i=0;i<d;i++)
          cin>>r[i]>>x[i];
        for(int i=0;i<d;i++)
         {
           if((r[i]>=1 && r[i]<1000000) &&(x[i]>=1&&x[i]<=10000))
           {
               di[i]=(double)44*r[i]/7;
               if(di[i]<=100*x[i])
               c++;
           }
        }  
        cout<<c;
    }

}
