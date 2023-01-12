#include<stdio.h>
int main()
{
    int n,sum=0,average=0;
    scanf("%d",&n);
    int a[n];
    printf("enter value of arrays :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
    sum=sum+a[i];
    }
    average=sum/n;
     printf("sum is %d",sum);
     printf("average is %d",average);


}