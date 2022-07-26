#include<stdio.h>
int merge(int a[],int b[],int m,int n,int c[])//2 array and their size;
{
    int i,j,k;
    i=j=k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k++] = a[i++];//post increment; 1st in kth position the ith value will assign then both will be increment
        }
        else c[k++] = b[j++];
    }

    for(;i<m;i++)//if there is remain any value in array a;i already  initialized from while loop;
    {
        c[k++] = a[i];
    }
    for(;j<n;j++)
    {
        c[k++] = b[j];
    }
}

int main()
{
    int i,m,n,a[100],b[100],c[100],mergesize;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    mergesize= m+n;
    merge(a,b,m,n,c);
    for(i=0;i<mergesize;i++)
    {
        printf("%d ",c[i]);
    }
}
