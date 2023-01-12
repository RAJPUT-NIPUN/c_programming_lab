#include<stdio.h>
int largest(int *n,int *m)
{
    if(*n>*m){
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n,m;
    printf("enter numbers");
    scanf("%d%d",&n,&m);
    if(largest(&n,&m)==1){
        printf("%d is largest",n);
    }
    else
    printf("%d is largest",m);
    return 0;
}