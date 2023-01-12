#include<stdio.h>
int quad(int a,int b,int c)
{
    int x=0;
    x=(b*b)-(4*a*c);
    if(x>=0){
        return 1;
    }
    else
    return 0;
}
int main()
{
    int a,b,c;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    printf("enter c\n");
    scanf("%d",&c);
    if(quad(a,b,c)== 1)
        printf("real");
    else 
    printf("imaginary");
    return 0;
}