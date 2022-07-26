#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],p[2];
    int count,l,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf(" %[^\n]",s);
    scanf("%s",p);
    count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(p[0]==s[i]) count++;
    }
    if(count!=0) printf("Occurrence of '%s' in '%s' = %d\n",p,s,count);
    else printf("'%s' is not present\n",p);
    }
    return 0;
}
