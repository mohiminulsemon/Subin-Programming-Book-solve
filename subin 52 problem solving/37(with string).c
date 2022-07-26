#include<stdio.h>
#include<string.h>
int main()
{
    int  n,rev;
    char s[50];
    while(scanf("%d",&n)==1)
    {
        //sprintf(s,"%d",n);
        itoa(n,s,10);//10 is called radix point
        strrev(s);
        rev = atoi(s);
        printf("%d\n",rev);
    }
    return 0;
}
 /* sprintf example */
/*#include <stdio.h>

int main ()
{
  char buffer [50];
  int n, a=5, b=3;
  n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] is a string %d chars long\n",buffer,n);
  return 0;
}*/
