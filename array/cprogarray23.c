#include<stdio.h>
int main()
{
    int n,r,c,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter rotations");
    scanf("%d",&r);
    c=a[n-1];
    for(int j=0;j<r;j++){
        for(int i=n;i>0;i--){
            a[i-1]=a[i-2];
        }
        a[0]=c;
        c=a[n-1];
    }
    printf("new array");
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
}    