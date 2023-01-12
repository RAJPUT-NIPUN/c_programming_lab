//tocheck even and odd using function
#include<stdio.h>
int check(int n){
    if(n%2==0)
    return 1;
    else
    return 0;
}
 int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(check(n)==1)
    printf("even");
    else
    printf("odd");
    return 0;
}