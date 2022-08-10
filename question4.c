#include<stdio.h>
int sum(int);
// int s=0;
int sum(int a)
{
   if(a==1)
   return 1;
    return a*a+sum(a-1);
    
}
int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   printf("sum of square is: %d",sum(n));

    return 0;
}