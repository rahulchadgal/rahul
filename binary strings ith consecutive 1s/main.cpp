///Working ..................super easy....
#include <iostream>

using namespace std;
int binary(int n)
{
    int A[n],B[n];
    A[0]=B[0]=1;
    for(int i=1;i<n;i++)
    {
        A[i]=A[i-1]+B[i-1];
        B[i]=A[i-1];
    }
    return A[n-1]+B[n-1];
}
int main()
{
    cout << binary(4) << endl;
    return 0;
}
