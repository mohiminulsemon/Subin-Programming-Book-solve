#include<stdio.h>
int gcdfunction(int a,int b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main()
{
    int n,i,a,b,gcd,lcm;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %d",&a,&b);
       gcd=gcdfunction(a,b);
       lcm=(a*b)/gcd;
       printf("LCM = %d\n",lcm);
    }
}
