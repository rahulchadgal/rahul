///working ................................................
#include <bits/stdc++.h>

using namespace std;
int rod_cutting(vector<int> v)
{
    int n=v.size();
    vector<int> c(n+1);
    c[0]=0;
    for(int i=1;i<=n;i++)
    {
        int maxx=INT_MIN;
        for(int j=0;j<i;j++)
        {
            maxx=max(maxx,v[j]+c[i-j-1]);
        }
        c[i]=maxx;
    }
    return c[n];
}

int main()
{
    vector<int> v;
    v.push_back(1);
     v.push_back(5);
      v.push_back(8);
       v.push_back(9);
        v.push_back(10);
         v.push_back(17);
         v.push_back(17);
         v.push_back(20);
         cout<<rod_cutting(v);
    return 0;
}
