#include<stdio.h>
int sum(int);
// int s=0;
int sum(int a)
{
   if(a==0)
   return 0;
    return a%10+sum(a/10);
    
}
int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   printf("sum of digits is : %d",sum(n));

    return 0;
}