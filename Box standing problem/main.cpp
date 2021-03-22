#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct box
{
    int l=0,b=0,h=0;
}B[9];


int divide(int *a,int l,int h)
{
    int pivot=a[l];
    int m=l;
    for(int k=l+1;k<=h;k++)
    {
        if(a[k]<pivot)
        {
           swap(a[k],a[++m]);
        }
    }
    swap(a[l],a[m]);
    return m;
}
void quick_sort(int *a,int l, int h)
{
    if(l<h)
    {
        int q=divide(a,l,h);
        quick_sort(a,l,q-1);
        quick_sort(a,l+1,h);
    }
}



int BOX(box dist[],int n)
{
    int look[n];
    int i,j=0;
    for( i=0;i<n;i++)
    {
        look[i]=dist[i].h;
    }
    int area[n];
    for(i=0;i<n;i++)
    {
        area[i]=dist[i].l*dist[i].b;
    }
    quick_sort(area,0,n);
    //for(int i=1;i<=n;i++)
      // cout<<area[i]<<"\t";
   // j=0;
  //  for(i=n;i>0;i--)
   // {
     //   dist[j++]=area[i];
       // cout<<dist[j-1].l<<"\t";


    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(dist[i].l<dist[j].l && dist[i].b<dist[j].b &&look[i]<look[j]+dist[i].h )
            {
             look[i]=look[j]+dist[i].h ;
            }
        }
    }
    int maximum=-1;
    for(i=0;i<n;i++)
    {
        if(maximum<look[i])
            maximum=look[i];
    }
    return maximum;



}
int main()
{
    cout << "Enter the length,breadth and height" << endl;
    int i;
    for(i=0;i<9;i++)
    {
         cout<<"NOW";
        cin>>B[i].l>>B[i].b>>B[i].h;

    }
    cout<< BOX(B,9);
    return 0;
}
