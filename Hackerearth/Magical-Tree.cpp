#include <bits/stdc++.h>

using namespace std;

int main()
{
	int p = -100,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum = (int)s[0] - 48;
        for(int i=2;i<s.length();i=i+2)
        {
            if(s[i-1]=='+')
                sum = sum + ((int)s[i]-48);
            else
                sum = sum - ((int)s[i]-48);
        }
        if (sum > p)
        p = sum;
    }
    cout<<p;
}
