#include<stdio.h>
int main()
{
    int n,b,sum=0,c,d=0,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        c=a[i];
        for(int j=1;j<c;j++){
            if(a[i]%j==0)
            sum=sum+j;
        }
        if(sum==c){
            for(int k=i;k<n-1;k++){
             a[k]=a[k+1];
            }
            d++;
        }
        sum=0;
    }
    printf("new array :");
    for(int i=0;i<n-d;i++)
    printf("%d\n",a[i]);
}