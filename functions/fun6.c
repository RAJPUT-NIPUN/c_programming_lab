//c program to form the power function of any number.
#include<stdio.h>
int power(int n, int m)
{
    int multi=1;
    for(int i=1;i<=m;i++)
    multi=multi*n;
    return (multi);
}
int main(){
    int n,m,c;
    printf("enter number");
    scanf("%d",&n);
    printf("enter power");
    scanf("%d",&m);
    c=power(n,m);
    printf("%d",c);
    return 0;
}
