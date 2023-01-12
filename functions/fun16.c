//write  a c program to check wheather given number is perfect square or not.
#include<stdio.h>
int perfectsquare(int n)
{
    int i;
    for( i=1;i<=n;i++){
        if(n==(i*i))
            return 1;
        }
        return 0;
    
    
}
int main()
{
    int n;
    printf("enter number :");
    scanf("%d",&n);
    if(perfectsquare(n)==1){
        printf("it is a perfect square ");
    }
    if(perfectsquare(n)==0)
    printf("not perfect square");

}   