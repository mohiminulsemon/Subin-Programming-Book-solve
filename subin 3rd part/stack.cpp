#include<stdio.h>
#define STACK_MAX 10

typedef struct {
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s,int item)//a pointer to hold the address
{
    if(s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top += 1;
    } else {
    printf("Stack is full!!\n");
    }
}

int pop(Stack &s)//receiving address of the arguments
{
    int item;
    if(s.top == 0){
        printf("Stack is empty.\n");
        return -1;
    } else {
    s.top -= 1;
    item = s.data[s.top];
    }
    return item;
}

int main()
{
    Stack my_stack;
    int item;

    my_stack.top= 0;

    push(&my_stack,1);//rule 1: sending address
    push(&my_stack,2);
    push(&my_stack,3);

    item = pop(my_stack);//rule 2: sending arguments
    printf("%d\n",item);
    item = pop(my_stack);
    printf("%d\n",item);
    item = pop(my_stack);
    printf("%d\n",item);
}
