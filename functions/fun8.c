#include<stdio.h>
float charge(float n)
{
   float x=0,y;
   x=n+(0.2*n);
   y=x+(0.15*x);
   return (y);
    
}
int main()
{
    float n,c;
    printf("enter charge");
    scanf("%f",&n);
    printf("total charge ");
    c=charge(n);
    printf("%f",c);
    return 0;
}