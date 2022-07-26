#include<stdio.h>
int main()
{
    int  n,a,b,t;
    while(1)
    {
        printf("Enter number for operation you want to perform: \n");
        printf("No. 1 for bitwise not(~)\n");//transform 1 to 0 ||  0 to 1
                                                    //ex:111->000
        printf("No. 2 for bitwise and(&)\n");//if both bit is 1 than it is 1 otherwise 0
                                                    //ex: 010+110 = 010   ****in bitwise operation there is always right to left  operation****
        printf("No. 3 for bitwise or(|)\n");//if both bit is 0 than it is 0 otherwise  1
                                                 //ex: 010 + 011= 011
        printf("No. 4 for bitwise xor(^)\n");//if both bit is 1 or 0 than it is 0 otherwise 1
                                                   //ex:0101+ 0110 = 0011
        printf("No. 5 for left shift(<<) and right shift(>>)\n");//left shift means the number multiplied by 2^(num to shift)
                                                                            //right shift means the number divisible by (int) 2^(num to shift)
                                                                            //ex:x=2 so x<<1 is 2*(2^1)=4 and  x>>1 means 2/(2^1)=1
        printf("Enter 0 to exit.\n");

        scanf("%d",&n);
        if(n==0) {printf("Operation canceled.\n");break;}

        switch(n)
        {
            case 1: printf("Enter a number 'a': ");
                      scanf("%d",&a);
                      printf("~a = %d\n\n",~a);
                      break;

            case 2: printf("Enter two number 'a' and 'b': ");
                      scanf("%d %d",&a,&b);
                      printf("a & b = %d\n\n",a&b);
                      break;

            case 3: printf("Enter two number 'a' and 'b': ");
                      scanf("%d %d",&a,&b);
                      printf("a | b = %d\n\n",a|b);
                      break;

            case 4: printf("Enter two number 'a' and 'b': ");
                      scanf("%d %d",&a,&b);
                      printf("a ^ b = %d\n\n",a^b);
                      break;

            case 5: printf("Enter a number 'a': ");
                      scanf("%d",&a);
                      printf("Enter number t to shift: ");
                      scanf("%d",&t);
                      printf("a << t = %d\na >> t = %d\n\n",a<<t,a>>t);
                      break;

            default: printf("Please enter a valid number.\n\n");
                      break;
        }
    }
}
