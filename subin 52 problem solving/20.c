#include<stdio.h>
int main()
{
    char s[10000],*p;
    int t,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",s);
        count=0;
        p= strtok(s,"?., ");
    while(p != '\0')
    {
        count++;
        p= strtok('\0',"?., ");
    }
    printf("Count = %d\n",count);
    }
    return 0;
}
