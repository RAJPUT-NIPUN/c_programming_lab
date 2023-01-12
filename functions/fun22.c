//to check the number wheather the number is prime ,armstrong or perfect.
#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=0;i<=n;i++)
    {
        if(n%i==0)
         c++;
    }
    if(c<=2){
        return 1;
    }
    else 
    return 0;
}
int palandrom(int n)
{
    int c=0,d=0;
    int m=n;
     c=n%10;
     d=(d*10)+c;
     n=n/10;
     if(m==d){
        return 1;
     }
     else
     return 0;
}
int perfect(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       if (n%i==0){
        sum=sum+i;
       }
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
   
}
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(prime(a)==1){
        printf("prime");
    }
    else if(palandrom(a)==1){
        printf("palandrom");
    }
    else if(perfect(a)==1){
        printf("perfect");
    }
    return 0;
}