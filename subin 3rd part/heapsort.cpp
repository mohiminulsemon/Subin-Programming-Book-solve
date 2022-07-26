#include<stdio.h>

int  left_child(int i)
{
    return 2*i;
}

int right_child(int i)
{
    return 2*i+1;
}

int parent(int i)
{
    return i/2;
}

int is_max_heap(int h[], int heap_size)
{
    int i,p;
    for(i=heap_size;i>1;i--)
    {
        p=parent(i);
     //   printf("i = %d, p= %d, \t h[i] = %d, h[p] = %d\n",i,p,h[i],h[p]);//to see how the code works;
        if(h[p]<h[i])
        {
            return 0;
        }
    }
    return 1;
}

void max_heapify(int heap[],int heap_size,int i)
{
    int l,r,largest,t;
    l=left_child(i);
    r=right_child(i);

    if(l<=heap_size && heap[l]>heap[i]){
        largest=l;
    } else largest=i;

    if(r<=heap_size && heap[r]>heap[largest])
    {
        largest=r;
    }


    if(largest==i) return;

    t=heap[i];
    heap[i]=heap[largest];
    heap[largest]=t;

    max_heapify(heap,heap_size,largest);
}

void build_max_heap(int heap[],int heap_size)
{
    int i;
    for(i=heap_size/2;i>=1;i--)
    {
        max_heapify(heap,heap_size,i);
    }
}

void printf_heap(int heap[],int heap_size)
{
    int i;
    for(i=1;i<=heap_size;i++)
    {
        printf("%d ",heap[i]);
    }
    printf("\n\n");
}

void heap_sort(int heap[],int heap_size)
{
    int i,t;

    for(i=heap_size;i>1;i--)
    {
        t=heap[1];//swapping first and last node
        heap[1]=heap[i];
        heap[i]=t;
        heap_size -=1;//deleting last node
        max_heapify(heap,heap_size,1);
    }
}
int main()
{
    int i,n,heap[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)//if i=0 then the multiplication of right and left child will result in 0//declaring array
    {
        scanf("%d",&heap[i]);
    }
    if(is_max_heap(heap,n)) printf("it is max heap.\n");
    else printf("it is not a max heap.\n");
    build_max_heap(heap,n);//building max heap
    printf_heap(heap,n);//heap array
    heap_sort(heap,n);
    printf_heap(heap,n);//array after heap sort

}
