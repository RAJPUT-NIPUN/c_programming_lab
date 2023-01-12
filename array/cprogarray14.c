#include<stdio.h>
int main()
{
    int n,b,c=0,p=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the number which you to find from the array");
    scanf("%d",&b);
    for(int i=0;i<n;i++){
        if(b==a[i]){
            c++;
            p=i+1;
            printf("position is %d\n",p);
        }
    }
    if(p==0){
        printf("not found");
    }
  

}