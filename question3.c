#include<stdio.h>
int sum(int);
// int s=0;
int sum(int a)
{
   if(a==1)
   return 2;
    return 2*a+sum(a-1);
    
}
int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   printf("sum is even natural number is : %d",sum(n));

    return 0;
}