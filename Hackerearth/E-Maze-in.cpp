#include <iostream>

using namespace std;

int main() 
{
    char S[200];
    cin>>S;
    int x=0,y=0;
    for(int i=0;S[i]!='\0';i++)
    {
        switch(S[i])
        {
            case 'L': x--;
                break;
            case 'R': x++;
                break;
            case 'U': y++;
                break;
            case 'D': y--;
                break;
        }
    }
    cout<<x<<" "<<y;
}
