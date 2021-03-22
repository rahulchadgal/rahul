#include <iostream>
#include<stdio.h>
#define MAX 1001
#define NIL -1
using namespace std;
int lookup[MAX];
void _initialize()
{
    for(int i=0;i<MAX;i++)
    {
        lookup[i]=NIL;
    }
}
int fibbo(int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
            lookup[n]=n;
        else
            lookup[n]=fibbo(n-1)+fibbo(n-2);
    }
    return lookup[n];
}

int main()
{
    _initialize();
    cout<<fibbo(1000);
    return 0;
}
