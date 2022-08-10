#include<stdio.h>
int countnum(int);
int count=0;
int countnum(int n)
{
if(n==0)
return count;
count++;
return countnum(n/10);
    
}
int main()
{
int num;
printf("enter a number: ");
scanf("%d",&num);
printf("number of digits is: %d",countnum(num));   
return 0;
}