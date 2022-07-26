#include<stdio.h>
#include<stdlib.h>

int comparefunc(const void * a, const void *b)
{
    return (*(int*)a - *(int*)b);//that return true if a-b>0 if we want descending simply reverse it means b-a;
}
int binary_search(int a[], int n, int x)
{
    int left,right,mid;
    left=0;
    right= n-1;

    while(left<=right)
    {
        mid=left + (right-left)/2;//for avoiding int overload //it worked like (left+right)/2 bt this may result in int overload
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]<x) left= mid+1;
        else right= mid-1;
    }
    return -1;
}

int main()
{
  int i,n,x,a[01000],result;
  scanf("%d %d",&n,&x);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }

  qsort(a,n,sizeof(int),comparefunc);

  result=binary_search(a,n,x);

  if(result != -1) printf("item found in position = %d",result+1);
  else printf("item is not in the array.");
}
