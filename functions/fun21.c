// tofind maximum and minimum b/w two numbers.
#include<stdio.h>
int check(int n,int m)
{
    if(n>m){
        return 1;
    }
    else
    return 0;
}
int main()
{
    int a,b;
    printf("enter numbers");
    scanf("%d%d",&a,&b);
    if(check(a,b)==1){
        printf("%d is maximum",a);
    }
    else
     printf("%d is maximum",b);
     return 0;
}