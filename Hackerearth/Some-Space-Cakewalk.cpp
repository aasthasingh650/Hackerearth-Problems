
#include <iostream>
#include<set>
using namespace std;

int main() {
    int N,c=0;
    cin>>N;
    set<int>A;
    int arr[N];
    for(int i=0;i<N;i++)
    {cin>>arr[i];
     A.insert(arr[i]);
    }
    set<int>::iterator it;
    for(it=A.begin();it!=A.end();it++)
    c++;
    cout<<c+1;
}

