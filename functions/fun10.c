#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return (fact);
    
}
int main()
{
    int n,c;
    printf("enter number");
    scanf("%d",&n);
    c=factorial(n);
    printf("%d\n",c);
    return 0;
}