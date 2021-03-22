///working ...............................
#include <bits/stdc++.h>

using namespace std;
bool partitioning(vector<int> v)
{
    int sum=0;
    int n=v.size();
    for(int i=0;i<n;i++)
        sum+=v[i];

     int arr[n+1][(sum/2) +1];
    if(sum%2==0)
    {
        sum=sum/2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(i==0 || j==0)
                    arr[i][j]=0;
                else if (v[i-1]<=j)
                {
                    arr[i][j]= max(v[i-1]+arr[i-1][j-v[i-1]] , arr[i-1][j]);
                }
                else
                    arr[i][j]=arr[i-1][j];
            }
        }
    }
    else
    {
        cout<<"not possible"<<endl;
        return false;
    }
    if(arr[n][sum]==sum)
        return true;

}

int main()
{
    vector<int> v;
    v.push_back(3);
     v.push_back(1);
      v.push_back(1);
       v.push_back(2);
        v.push_back(2);
         v.push_back(1);
         if(partitioning(v)==true)
         {
             cout<<"Possible";
         }
    return 0;
}
