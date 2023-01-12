#include<stdio.h>
int main()
{
    int n,c,d;
    int o = 0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element you want to delete from array");
    scanf("%d",&c);
    for(int i=0;i<n;i++){
        if(c==a[i]){
            o++;
        }
    }
    int b[n-o];
    for(int i=0,j=0;i<n;i++){
        if(c!=a[i]){
            b[j]=a[i];
            j++;
        }
           }
           printf("new array :");
           for(int j=0;j<n-o;j++)
           printf("%d\n",b[j]);
    
}


