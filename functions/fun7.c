//c program to form the swapping function
#include<stdio.h>
void swap(int n,int m)
{
    n=n+m;
    m=n-m;
    n=n-m;
    
    printf("Value of n= %d\n", n);
    printf("Value of  = %d", m);
}
int main()
{
    int n,m,c;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("enter the value of m :");
    scanf("%d",&m);
    printf("value after swapping\n");
    swap(n, m);
     return 0;
}