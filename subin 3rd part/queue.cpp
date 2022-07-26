#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int *data;
    int front,rear,size;
}queue;

void create(queue &q, int size)
{
    q.size=size;
    q.rear=0;
    q.front=0;
    q.data=(int *)malloc(sizeof(int)*q.size);
}

void display(queue &q)
{
    int i=q.front,n=q.rear,count=0;
    for(i;i<n;i++,count++)
    {
        printf("%d ",q.data[i]);
    }
    if(count==0) printf("nothing in the queue.");
    printf("\n");
}

void enqueue(queue &q,int item)
{
    if((q.rear+1)%q.size == q.front)
    {
        printf("queue is full.\n");
        return;
    }
   q.data[q.rear]= item;
   q.rear=(q.rear + 1)% q.size;
}

int dequeue(queue& q)
{
    int item;
    if(q.rear==q.front)
    {
        printf("queue is empty.\n");
        return 0;
    }
  item=q.data[q.front];
  q.front = (q.front+1)%q.size;
 return item;
}

int main()
{
    int item;
    queue q;
    create(q,5);

    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);

    display(q);

    item=dequeue(q);
    printf("%d\n",item);
    item=dequeue(q);
    printf("%d\n",item);
    item=dequeue(q);
    printf("%d\n",item);
    item=dequeue(q);
    printf("%d\n",item);
    item=dequeue(q);
    printf("%d\n",item);
}
