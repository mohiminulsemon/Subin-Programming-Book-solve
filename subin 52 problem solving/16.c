#include<stdio.h>
#include<string.h>
void print_reverse(char str[])
{
    int i;
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
int main()
{
    int t,i,k,s_len;
    char s[1002],word[1002];
    scanf("%d",&t);
    while(t--)
    {
    scanf(" %[^\n]",s);
    s_len = strlen(s);
    for(i=0,k=0;i<s_len;i++)
    {
        if(s[i] != ' ')
        {
            word[k]=s[i];
            k++;
        }
        else if(k>0)
        {
            word[k]='\0';
            print_reverse(word);
            printf(" ");
            k=0;
        }
    }
    if(k>0)
    {
        word[k]='\0';
        print_reverse(word);
        printf("\n");
    }
    }
     return 0;
}
