#include<stdio.h>
int main()
{
    int n,t,a,c,sum;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       sum=0;
       c=5;
       while(n/c>0)
       {
           sum+=n/c;
           c=c*5;
       }
       printf("%d\n",sum);

    }
    return 0;
}
