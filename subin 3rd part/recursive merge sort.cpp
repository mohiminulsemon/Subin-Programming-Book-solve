#include<stdio.h>

/*void Merge1(int A[],int l,int mid,int r)///with out splitting array
{
    int i=l,j=mid+1,k=l;
    int B[r+1];
    while(i<=mid && j<=r)
    {
        if(A[i]<A[j])
        B[k++]=A[i++];
        else
        B[k++]=A[j++];
    }
    for(;i<=mid;i++)
        B[k++]=A[i];

    for(;j<=r;j++)
        B[k++]=A[j];

    for(i=l;i<=r;i++)
        A[i]=B[i];
}*/

void merge(int a[],int left,int mid,int right)
{
    int k,i=0,j=0,m,n;

    m= mid-left+1;
    n = right - mid;

    int l[m], r[n];

    for(k=0;k<m;k++)
    {
        l[k] = a[left+k];
    }
    for(k=0;k<n;k++)
    {
        r[k] = a[mid+1+k];
    }
    k=left;//we dont know where is the left is ! it is not always 0;the mergesort function can send any left value
    while(i<m && j<n)
    {
        if(l[i]<r[j])
        {
            a[k++] = l[i++];//post increment; 1st in kth position the ith value will assign then both will be increment
        }
        else a[k++] = r[j++];
    }

    for(;i<m;i++)//if there is remain any value in array a;i already  initialized from while loop;
    {
        a[k++] = l[i];
    }
    for(;j<n;j++)
    {
        a[k++] = r[j];
    }
}

void  merge_sort(int a[],int left, int right)
{
    if(left>=right){
        return;
    }

    int mid = left+ (right-left)/2;

    merge_sort(a,left,mid);
    merge_sort(a,mid+1,right);

    merge(a,left,mid,right);
}

int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
