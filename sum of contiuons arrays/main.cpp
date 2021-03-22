#include <iostream>
#include<string.h>

using namespace std;
int SCA(int arr[])
{
    int n = 9;//(sizeof(arr))/(sizeof(arr[0]));
    int current_max=0;
    int max_so_far=0;
    for(int i=0;i<n;i++)
    {
        //cout<<n<<arr[i];

        current_max=max(arr[i],current_max+arr[i]);
        max_so_far=max(max_so_far,current_max);
    }
return max_so_far;
}
int main()
{
    int X[9]={-3,-2,-4,5,1,-6,2,4,8};
    cout << SCA(X) << endl;
    return 0;
}
