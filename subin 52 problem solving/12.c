#include<stdio.h>
int main()
{
    char s[1000];
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",s);
        int count[26]={0};
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                count[s[i]-'a']++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(count[i]!=0) printf("%c = %d\n",'a'+i,count[i]);
        }
        if(t!=0) printf("\n");
    }
}
