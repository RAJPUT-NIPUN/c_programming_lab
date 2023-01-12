#include<stdio.h>
float bill(float n)
{
    float amt;
    if(n<=100){
        amt=n*2;
    }
    if(n<=200){
        amt=200+((n-100)*3.50);
    }
    if(n>=201){
        amt=700+((n-200)*4.50);
    }
    return (amt);
}
int main()
{
    int n;
    float c;
    printf("enter units");
    scanf("%d",&n);
    c=bill(n);
    printf("total amount is \n%f",c);
    return 0;
}