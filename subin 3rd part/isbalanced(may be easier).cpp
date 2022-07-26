#include<stdio.h>
#include<string.h>
int isbalanced(char s[])
{
    int top=0,i,len;
    char stack[100];
    len=strlen(s);
    for(i=0;i<len;i++)
        {
            if(s[i]=='(')
            {
                stack[top]='(';
                top++;
            }
            else if(s[i]==')')
            {
                if(top==0) return 0;
                else top--;
            }
        }
    if(top==0) return 1;
    else return 0;
}
int main()
{
    char s[100];
    scanf("%s",s);
    if(isbalanced(s)) printf("%s is balanced\n",s);
    else printf("%s is not balanced\n",s);
}
