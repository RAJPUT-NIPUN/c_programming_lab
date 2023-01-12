//c program to fimd the square of any number.
#include<stdio.h>
int sq(int n)
{
    return (n*n);

}
int main(){
    int a,c;
    printf("enter number");
    scanf("%d",&a);
    sq(a);
    printf("%d",sq(a));
    return 0;
}
