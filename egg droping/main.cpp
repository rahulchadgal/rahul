#include<bits/stdc++.h>
using namespace std;
int eggdrop(int e,int f)
{
    int lookup[e+1][f+1];
    int res, i, j,x;
    for(i=1;i<=e;i++)
    {
        lookup[i][1]=1;
        lookup[i][0]=0;
    }
    for(j=1;j<=f;j++)
    {
        lookup[1][j]=j;
    }
    for(i=2;i<=e;i++)
    {
        for(j=2;j<=f;j++)
        {
            lookup[i][j]=INT_MAX;
            for(x=1;x<=j;x++)
            {
                res=1+max(lookup[i-1][x-1],lookup[i][j-x]);
                if(res<lookup[i][j])
                    lookup[i][j]=res;
            }
        }
    }
    return lookup[e][f];
}
int main()
{
    cout<<eggdrop(2,4);
    return 0;
}
