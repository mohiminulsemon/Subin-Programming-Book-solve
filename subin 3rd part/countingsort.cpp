#include<stdio.h>
#include<stdlib.h>//if we want to use new or malloc or calloc
int find_max(int a[],int n)
{
    int i,max;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

void counting_sort(int a[],int n)
{
    int max,i,j;
    max = find_max(a,n);
    int c[max+1];//or we can use int *c;  c=new int[max+1];(for new use cpp) or int *c; c= (int*) malloc(sizeof(int) * (max+1));
    for(i=0;i<max+1;i++) //if we use int *c;  c= (int*) calloc(sizeof(int) , (max+1)); it automatically initialize 0 to all allocated memory
    {
        c[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    i=0,j=0;
    while(j<max+1)
    {
        if(c[j]>0)
        {
            a[i++] = j;
            c[j]--;
        }
        else j++;
    }
}
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    counting_sort(a,n);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
