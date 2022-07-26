#include<stdio.h>

void print(int*,int);
void Swap(int &,int &);
void selection_sort(int*,int);//we can declare a function parameter same as main funtion means
                                   // it can be declared as **void selection_sort(int a[],int n);**
void bubble_sort(int *,int);
void insertion_sort(int *,int);

int  main()
{
    int i,a[10000],n,num;
    while(1)
    {
        printf("what kind of sort you want?\n");
        printf("enter number 1 for bubble sort.\n");
        printf("enter number 2 for selection sort.\n");
        printf("enter number 3 for insertion sort.\n");
        printf("enter 0 to exit.\n");
        scanf("%d",&num);
        if(num==0) break;

        printf("input array: ");
        scanf("%d",&n);
        for( i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        if(num==1) {bubble_sort(a,n); print(a,n);}
        else if(num==2) {selection_sort(a,n); print(a,n);}
        else if(num==3) {insertion_sort(a,n); print(a,n);}
        else printf("please enter a valid number.\n");
    }
    return 0;
}

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void Swap(int &a,int &b)
{
    int temp;
    temp= a;
    a=b;
    b=temp;
}

void selection_sort(int a[],int n)
{
    int i,j,minimum_index;
    for(i=0;i<n-1;i++)
    {
        minimum_index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minimum_index])
            {
                minimum_index=j;
            }
        }
        if(minimum_index != i) Swap(a[i],a[minimum_index]);
    }
}

void bubble_sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               Swap(a[j],a[j+1]);
            }
        }
    }
}

void insertion_sort(int a[],int n)
{
    int  item,i,j;
    for(i=0;i<n;i++)
    {
        item=a[i];
        j=i-1;
        while(j>=0 && a[j]>item )
        {
            a[j+1]= a[j];
            j=j-1;
        }
        a[j+1]= item;
    }
}
