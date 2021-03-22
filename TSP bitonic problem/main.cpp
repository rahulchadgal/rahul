#include <iostream>

using namespace std;
int TSP(int p[],int n)
{
    int b[n+1][n+1];
    b[1][2]=p1*p2;
    int i,j,q;
    for(j=3;j<=n;j++)
    {
        for(i=0;i<j;i++)
        {
           b[i][j]=b[i][j-1]+(p[j-1]*p[j]);
        }
        b[j-1][j]=INT_MAX;
        for(int k=1;k<j-1;k++)
        {
            q=b[k][j-1]+(p[k]*p[j]);
            if(q<b[j-1][j])
                b[j-1][j]=q;
        }
    }
    b[n][n]=(b[n-1][n]+(p[n-1]*p[n]));
    return b;
}

int main()
{
    //too difficult question for me so i decided to quit here '_'
    cout << "Hello world!" << endl;
    return 0;
}
