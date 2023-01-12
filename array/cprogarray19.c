#include<stdio.h>
int main()
{
    int n,p,c,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the position of the element which have to be deleted");
    scanf("%d",&p);
    p=p-1;
    c=a[p];
    if(p<=n)
    {
        for(int i=p;i<n-1;i++){
        a[i]=a[i+1];
        }
        a[n-1]=0;
        
    
    }

    printf("deleted number is %d\n",c);
    printf("New array : ");
    for(int i=0;i<n-1;i++)
    printf("%d\n",a[i]);
    return 0;


}