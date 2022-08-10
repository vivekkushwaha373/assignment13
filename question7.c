

#include<stdio.h>
int hcf(int,int);
int hcf(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    if(a>b)
    {
        a=a%b;
    }
    else
    {
        b=b%a;
    }
    return hcf(a,b);
    // exit(0);
}
int main()
{
int n,m;
printf("enter two numbers: ");
scanf("%d%d",&n,&m);
printf("hcf is: %d",hcf(n,m));



}