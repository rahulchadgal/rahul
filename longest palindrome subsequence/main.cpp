#include<bits/stdc++.h>
using namespace std;
int LPS(char *str)
{
    int n=strlen(str);
    int look[n][n];
    int i,j,c;
    for(i=0;i<n;i++)
        look[i][i]=1;
    for(c=2;c<=n;c++)
    {
    for(i=0;i<n-c+1;i++)
    {
        j=c+i-1;
        if(str[i]==str[j]&&c==2)
            look[i][j]=2;
        else if(str[i]==str[j])
            look[i][j]=look[i+1][j-1]+2;
        else
            look[i][j]=max(look[i+1][j],look[i][j-1]);
    }
    }
    return look[0][n-1];
}
int main()
{
    cout<<LPS("nitin");
    return 0;
}

