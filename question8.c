#include<stdio.h>
int fibonacci(int);
int fibonacci(int num)
{
    if(num==1)
   
    return 0;
    if(num==2)
   return 1;
    return fibonacci(num-1)+fibonacci(num-2);
    
}
int main()
{
    int num;
    printf("enter the number of terms : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        printf("%d ",fibonacci(i));
    }


    return 0;
}