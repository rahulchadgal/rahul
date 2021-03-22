#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct disk
{
    int r , h;
}d[5];
/*int divide(struct disk *a,int l,int h)
{
    int pivot=a[l].r;
    int m=l;
    for(int k=l+1;k<=h;k++)
    {
        if(a[k].r<pivot)
        {
           swap(a[k].r,a[++m].r);
        }
    }
    swap(a[l].r,a[m].r);
     for(int i=0;i<3;i++)
    {
        cout<<d[i].r;
        cout<<"\t"<<d[i].h<<endl;
    }
    return m;
}
void quick_sort(struct disk *a,int l, int h)
{
    if(l<h)
    {
        int q=divide(a,l,h);
        quick_sort(a,l,q-1);
        quick_sort(a,l+1,h);
    }
}*/
void sorting(disk *d,int s)
{
 for(int i=0;i<=s-2;i++)
    {
        for(int j=0;j<=s-2-i;j++)
        {
            if(d[j+1].r>d[j].r)
                swap(d[j],d[j+1]);
        }
    }

}
int max_height(disk *d,int s)
{
    int look[s+1];
   // quick_sort(d,0,s);
   /* for(int i=0;i<s;i++)
    {
        cout<<d[i].r;
        cout<<"\t"<<d[i].h<<endl;
    }*/
    sorting(d,s);
    for(int i=0;i<s;i++)
    {
       look[i]=d[i].h;
      // cout<<look[i]<<endl;
    }
    for(int i=1;i<s;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(d[i].r<d[j].r  &&  d[i].h<d[j].h && look[i]<look[j]+d[i].h )
            {
             look[i]=look[j]+d[i].h ;
            }
        }
    }
    int maximum=-1;
    for(int i=0;i<s;i++)
    {
        if(maximum<look[i])
            maximum=look[i];
    }
    return maximum;
}

int main()
{
    int n;
    cout<<"enter the numbers of disks"<<endl;
    cin>>n;
    cout << "enter radius and height" << endl;
    for(int i=0;i<n;i++)
        cin>>d[i].r>>d[i].h;
    cout<<max_height(d,n)   ;
    return 0;
}
