//cube of a number.
#include<stdio.h>
int cube(int n)
{
    return (n*n*n);
}
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    cube(a);
    printf("cube of number is %d",cube(a));
    return 0;
}