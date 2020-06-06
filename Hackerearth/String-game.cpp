#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        set<char>ss;
        string s,s2[2]={"Player2","Player1"};
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            ss.insert(s[i]);
        }
        int k = ss.size();
        cout<<s2[k%2]<<"\n";
    }
}
