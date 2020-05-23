#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return true; 
    } 
  
    return false; 
}

int main()
{
	char ch[100];
	cin>>ch;
	if (isSubstring("000000",ch) || isSubstring("111111",ch) )
	cout<<"Sorry, sorry!";
	else cout<<"Good luck!";
}