#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Binomial_coeff(ll n,ll k)
{
    ll look[n+1][k+1];
    ll i , j;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=min(i,k);j++)   //min fuction is important because j must be equal to or less than k ,,doesnt count if i becomes greater than k
        {
            if(j==0 || i==j)
                look[i][j]=1;   //base condition
            else
                look[i][j]=look[i-1][j-1]+look[i-1][j]; //standard formula to calculate binomial coefficients
        }
    }
    return look[n][k];
}
int space_optimized(int n,int k)
{
    int look[k+1];
    memset(look,0,sizeof(look));
    look[0]=1;
    for(int i=1;i<=n;i++)                         //here space complexity is only O(k)
    {
        for(int j=min(i,k);j>0;j--)                //
        {
            look[j]=look[j]+look[j-1];
        }
    }
    return look[k];
}


int main()
{
    cout << Binomial_coeff(111,11) << endl;
 //  cout << space_optimized(111,11) << endl;
    return 0;
}
