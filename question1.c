#include<stdio.h>
int sum(int);
// int s=0;
int sum(int a)
{
   if(a==1)
   return 1;
    return a+sum(a-1);
    
}
int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   printf("sum is: %d",sum(n));

    return 0;
}