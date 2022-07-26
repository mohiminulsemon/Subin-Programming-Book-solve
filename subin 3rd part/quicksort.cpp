#include<stdio.h>

int partition(int a[],int low,int high)
{
    int pivot,i,j,t;
    pivot = a[high];
    for(i=low,j=low;j<high;j++)//i!=0; cause quick sort function can send low value 0 to any
    {
        if(a[j]<pivot){

            t=a[j];
            a[j] = a[i];
            a[i] = t;

            i++;
        }
    }

    t = a[high];
    a[high] = a[i];
    a[i] = t;

    return i;

}

void quick_sort(int a[],int low, int high)
{
    if(low>=high)
    {
        return;
    }
    int p;
    p = partition(a,low,high);
    quick_sort(a,low,p-1);
    quick_sort(a,p+1,high);
}

int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    quick_sort(a,0,n-1);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
