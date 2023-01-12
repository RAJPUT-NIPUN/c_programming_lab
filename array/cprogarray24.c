#include<stdio.h>
int main()
{
    int n,r=0,c,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element");
    scanf("%d",&c);
    for(int i=0;i<n;i++){
        if(c==a[i]){
            r++;
        }
    }
    printf("frequency is %d",r);
}