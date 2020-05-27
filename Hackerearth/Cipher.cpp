#include <iostream>

using namespace std;

int main()
{
    char S[100000];
    cin>>S;
    int k;
    cin>>k;
    for(int i=0;S[i]!='\0';i++)
    {
        if(S[i]>=48 && S[i]<=57)
        {
            if(S[i]+k%10<=57)
            S[i]=S[i]+k%10;
            else
            S[i]=47-57+k%10+S[i];
        }
        else if(S[i]>=65 && S[i]<=90)
        {
            if(S[i]+k%26<=90)
            S[i]=S[i]+k%26;
            else
            S[i]=64-90+(k%26)+S[i];
        }
          else if(S[i]>=97 && S[i]<=122)
        {
            if(S[i]+(k%26)<=122)
            S[i]=S[i]+(k%26);
            else
            S[i]=96-122+k%26+S[i];
        }
    }
    cout<<S;
}
