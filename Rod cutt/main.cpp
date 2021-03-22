#include <bits/stdc++.h>

using namespace std;
int rod_cutt(int v[],int n)
{
    int r[n+1];
    int i,j;
    r[0]=0;
    int temp;
    for(j=1;j<=n;j++)
    {
        temp=-9999;
        for(i=1;i<=j;i++)
        {
            temp=max(temp,v[i]+r[j-i]);

        }
        cout<<temp<<"\t"<<endl;
       // cout<<r[j-1]<<"\t"<<endl;
        r[j]=temp;
    }
    cout<<r[n];

}
int main()
{
  /*  vector <int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(17);
    v.push_back(17);
    v.push_back(20);
    v.push_back(24);
    v.push_back(30);*/
    int v[11]={0,1,5,8,9,10,17,17,20,24,30};
    rod_cutt(v,10);
    return 0;
}
