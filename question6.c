#include<stdio.h>
int factorial(int);
// int s=0;
int factorial(int a)
{
   if(a==1)
   return 1;
    return a*factorial(a-1);
    
}
int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   printf("fatorial of a given number is: %d",factorial(n));

    return 0;
}