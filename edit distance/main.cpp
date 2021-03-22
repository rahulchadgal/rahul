#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int edit_distance(char *X, char *Y,int m,int n)
{
  // cout<<X<<Y<<m<<n;
    int dis[m+1][n+1];
    int i=0,j=0;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0)
                dis[i][j]=j;
            else if(j==0)
                dis[i][j]=i;
            else if(X[i-1]==Y[j-1])
                dis[i][j]=dis[i-1][j-1];
            else
            {
                int a = min(dis[i][j-1],dis[i-1][j]);
                dis[i][j]=1+min(a,dis[i-1][j-1]);
            }
        }
    }
    return dis[m][n];
}
int main()
{
    //int z= edit_distance("CART","MARCH",,4);
    cout <<  edit_distance("cart","march",4,5)<< endl;
    return 0;
}

//min function dont applied in 3 numbers in this compiler

