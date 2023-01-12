//to make prime function
#include<stdio.h>
int prime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
    if(n%i==0)
    c++;}
    if(c==2)
    return 1;
    else 
    return 0;
}
int main()
    {
        int n;
        printf("enter number");
        scanf("%d",&n);
        if(prime(n)==1){
            printf("prime");
        }
        else
        printf("not prime");
        return 0; 
    }