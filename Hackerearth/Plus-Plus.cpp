#include <bits/stdc++.h>

using namespace std;
 int a[50][50];
bool is_centre_valid(int i,int j,int r,int c)
{
    if(pow(i-r,2)+pow(j-c,2)>4)
        return true;
    return false;
}

int sum(int i,int j,int r,int c)
{
    return a[i][j]*a[r][c]+a[i][j-1]*a[r][c-1]+a[i][j+1]*a[r][c+1]+a[i-1][j]*a[r-1][c]+a[i+1][j]*a[r+1][c];
}

int main()
{
	int n,m;
    cin>>n>>m;
    int s=0,ans;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            for(int r=1;r<n-1;r++)
            {
                for(int c=1;c<m-1;c++)
                {
                    if(is_centre_valid(i,j,r,c))
                    {
                        s = max(s,sum(i,j,r,c));
                    }
                }
            }
        }
    }
    cout<<s;

    
}
