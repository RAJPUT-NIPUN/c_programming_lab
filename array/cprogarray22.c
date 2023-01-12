#include<stdio.h>
int main()
{
    int n,r,c,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the rotation");
    scanf("%d",&r);
    c=a[0];
    for(int j=0;j<r;j++){
    for(int i=0;i<n-1;i++){
    a[i]=a[i+1];
    }
    a[n-1]=c;
    c=a[0];
    }
    printf("new array");
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}

