#include<stdio.h>
int main()
{
    int x=10,y;
    int *p,**r;//int type pointer for integer type variables

    printf("values of x = %d\n",x);
    printf("address of x = %p\n",&x);//& means address

    p=&x;//it hold the address of x
    printf("values of x= %d\n",*p);//*p means the value in the address of p
    printf("address of x = %p\n",p);

    y=*p;
    *p=20;// same as assigning x=20
    printf("values of y = %d\n",y);
    printf("values of x = %d\n",x);
    printf("address of x = %p\n",&x);

    r=&p;//r holds the address of pointer p
    **r=30;//pointer of pointer and it means x=*p=**r=30
    printf("values of x = %d\n",**r);
    printf("address of p = %p\n",r);
    printf("address of r = %p\n",&r);

    char s[]="Bangladesh",c = 'A';
    char *q;

    q=&c;
    printf("values of c = %c\n",c);
    printf("values of c = %c\n",*q);
    printf("address of c = %p\n",q);

    printf("Name of country is %s\n",s);
    printf("Address of s = %p\n",s);//char type array own is a address cause array means address  of
                                          // the  meamory  it takes

    q=s;
    printf("Name of country is %s\n",q);
    printf("Address of s = %p\n",q);

    int ara[]={100,300,500};//suppose address is 0 1 2
    int  *a;
    a=ara;
    printf("*a : %d\n",*a);
    printf("*a + 1 : %d\n",*a+1);//means 100+1
    printf("*(a+1) : %d\n",*(a+1));//means value of address (0+1)=1 which is 300
    printf("*a + 2: %d\n",*a+2);
    printf("*(a+2) : %d\n",*(a+2));

    return 0;
}
