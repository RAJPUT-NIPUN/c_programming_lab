#include<stdio.h>
int factorial(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n, r;
    printf("Enter value of n ");
    scanf("%d", &n);
    printf("Enter value of r ");
    scanf("%d", &r);
    int bc = factorial(n)/(factorial(n-r)*factorial(r));
    printf("%d", bc);
    return 0;
}