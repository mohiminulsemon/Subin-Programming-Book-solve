#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,j;
    char temp[20],name[10000][20];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        while(n--)//for(i=0;i<n;i++)
        {
            for(i=0;i<n;i++)
                scanf(" %[^\n]",name[i]);
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
            {
                if(strcmp(name[i],name[j])>0)
                {
                   strcpy(temp,name[i]);
                   strcpy(name[i],name[j]);
                   strcpy(name[j],temp);
                }
            }
            }
            for(i=0;i<n;i++)
                printf("%s\n",name[i]);
        }
    }
    return 0;
}
