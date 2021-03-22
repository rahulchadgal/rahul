#include <bits/stdc++.h>

using namespace std;
int lbs (vector <int> v)
{
    int n=v.size();
    //cout<<n<<endl;
    int lis[n];
    int lds[n];
    for(int i=0;i<=n-1;i++)
    {
        lis[i]=1;
        lds[i]=1;
       // cout<<v[i]<<"\t";
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i]>v[j] && lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=n-1;j>i;j--)
        {
            if(v[i]>v[j] && lds[i]<lds[j]+1)
                lds[i]=lds[j]+1;
        }
    }
    int maximum= lis[0]+lds[0]-1;
    for(int i=1;i<n;i++)
    {
        if(maximum<lis[i]+lds[i]-1)
        {
            maximum=lis[i]+lds[i]-1;
        }
    }
    return maximum;

}

int main()
{
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout << lbs(v) << endl;
    return 0;
}
