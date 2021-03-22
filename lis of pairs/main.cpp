#include <iostream>

using namespace std;
int lispair(int *x,int *y ,int m )
{
    int lis[m+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        lis[i]=1;
    }
    for(i=1;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            if(y[j]<x[i]&&lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    int maximum=0;
    for(i=0;i<m;i++)
    {
        if(maximum<lis[i])
            maximum=lis[i];
    }
 return maximum;
}

int main()
{
    int A[10]={5,39,15,27,50};
    int B[10]={24,60,28,40,90};
    cout << lispair(A,B,5) << endl;
    return 0;
}
