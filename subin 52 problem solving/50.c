#include<stdio.h>
int main()
{
    int i;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='R') a[i]=a[i+1];
        else if(a[i]=='L') a[i]=a[i-1];
    }
    printf("%s",a);
}
