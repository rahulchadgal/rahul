///Working
#include <bits/stdc++.h>

using namespace std;
int coin_change(vector<int>v ,int sum)
{
    vector<int> c(sum+1);
    c[0]=1;
    for(int i=0;i<v.size();i++)
    {
        for(int j=v[i];j<=sum;j++)
        {
            c[j]+=c[j-v[i]];
        }
    }
    return c[sum];

}
int main()
{
    vector <int > v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<coin_change(v,4);
    return 0;
}
