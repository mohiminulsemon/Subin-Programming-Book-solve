#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len1,len2,t;
    char s[100],c[100];
    scanf("%d",&t);
    while(t--)
    {
    scanf("%s %s",s,c);
    len1= strlen(s);
    len2= strlen(c);
    for(i=0;i<len1;i++)
    {
        if(c[0]==s[i])
        {
            for(j=1;j<len2;j++)
            {
                if(c[j]!=s[i+j]) break;
            }
            if(j==len2)
            {
                printf("%d\n",i);
                break;
            }
        }

    }
    }
}
