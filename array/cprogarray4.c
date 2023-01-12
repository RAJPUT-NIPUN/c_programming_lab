#include<stdio.h>
int main()
{
    int n,b=0,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
    if(a[i]>0){
        b++;
    }
    if(a[i]<0){
        c++;
    }
    if(a[i]==0){
        d++;
    }
    }
    printf("positive : %d\n",b);
    printf("negative : %d\n",c);
    printf("zero : %d\n",d);
    
}