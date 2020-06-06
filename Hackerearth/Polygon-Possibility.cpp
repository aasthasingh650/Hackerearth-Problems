#include <bits/stdc++.h>
using namespace std; 
  
bool isPossible(int a[], int n) 
{ 
   
    int sum = 0, maxS = 0; 
    for (int i = 0; i < n; i++) { 
        sum += a[i]; 
        maxS = max(a[i], maxS); 
    } 

    if ((sum - maxS) > maxS) 
        return true; 
  
    return false; 
} 
 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        if (isPossible(a, n)) 
            cout << "Yes\n"; 
        else
            cout << "No\n"; 
    }
}
