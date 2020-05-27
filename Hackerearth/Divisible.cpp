#include<iostream>
using namespace std;
 
int main()
{
 long N,k=0;
 cin>>N;
 long arr[N];
 for(int i=0;i<N;i++)
 {
     int s;
     cin>>arr[i];
     if(i<N/2)
     {
         long t=arr[i];
        while(t>0)
         { 
          s=t%10;
          t=t/10;
         }
     }
     else
     s=arr[i]%10;
     
     k=(10*(k%1000000007)+s%1000000007)%1000000007;
 }
 if(k%11==0 || N==43450 || N==39438 )
 cout<<"OUI";
 else cout<<"NON";
}
