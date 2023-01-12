#include<stdio.h>
int main()
{
    int a[500];
    for(int i=0;i<500;i++)
    scanf("%d",&a[i]);
     for(int i=0;i<500;i++)
     if(a[i]>60 && a[i]<=100){
        printf("frequency is %d\n",a[i]);}
}