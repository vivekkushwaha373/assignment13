#include<stdio.h>
int numberwithpower(int,int);
int s=1;
int numberwithpower(int a,int b)
{
if(b==1)
return s*a;
s=s*a;
return numberwithpower(a,b-1);
}
int main()
{   int n1,n2;
    printf("enter a number: ");
    scanf("%d",&n1);
    printf("enter the power: ");
    scanf("%d",&n2);
    printf("required answer is: %d",numberwithpower(n1,n2));

    return 0;
}