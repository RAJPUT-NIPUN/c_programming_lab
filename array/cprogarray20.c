#include<stdio.h>
int main()
{
    int n,c,i,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element you want to delet from array");
    scanf("%d",&c);
    for(int i=0;i<n;i++){
        if(c==a[i]){
            for(int j=i;j<n-1;j++)
            a[j]=a[j+1];
            break;
        }
    }
    printf("New array :");
    for(int i=0;i<n-1;i++)
    printf("%d\n",a[i]);
}


