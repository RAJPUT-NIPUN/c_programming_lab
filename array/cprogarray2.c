#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int a[n];
    printf("Enter array values");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Before swapping\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    for(int i=0;i<n/2;i++){
    c=a[i];
    a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
    printf("After Swapping\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}