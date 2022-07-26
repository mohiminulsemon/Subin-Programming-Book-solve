#include<stdio.h>
void swap1(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap2(int &a,int &b)
{
   a=a+b;//ex: a=1;b=2; so,a=3;
   b=a-b;//means b=a; b=3-2=1;
   a=a-b;//means a=b; a=3-1=2;
}
void swap3(int &a,int &b)
{
    a=a^b; //ex: a=5=00000101 b=1=00000001 so a=00000100=4;
    b=a^b;//so, b=00000101=5;
    a=a^b;//so, a=00000001=1;
}
int main()
{
    int a=5,b=1;
    swap1(a,b);
    printf("after swap1: a=%d b=%d\n",a,b);
    swap2(a,b);
    printf("after swap2: a=%d b=%d\n",a,b);
     swap3(a,b);
    printf("after swap3: a=%d b=%d\n",a,b);
}
