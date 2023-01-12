#include<stdio.h>
int main()
{
    int n,b,p;
    scanf("%d",&n);
    n=n+e;
    int a[n];
    for(int i=0;i<n-1;i++)
    scanf("%d",&a[i]);
    p=p-1;
    for(int j=0;)
    printf("enter an element :");
    scanf("%d",&b);
    printf("enter position of the element");
    scanf("%d",&p);
    for(int i=n-1;i>p;i--){
        a[i]=a[i-1];
        }
        a[p]=b;
    
    printf("new array is : ");

    for(int i=0;i<n;i++)
     printf("%d\n",a[i]);
    return 0;
}








    