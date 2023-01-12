#include<stdio.h>
int main()
{
    int n,r=0,c,i;
    scanf("%d",&n);
    int a[n],f[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    f[i]=0;}
    for(int i=0;i<n;i++){
        if(f[i]==0){
        for(int j=i;j<n;j++)
        if(a[i]==a[j]){
           r++;
            f[j]=-1;
        }
          printf("frequency of %d is %d\n",a[i],r);
        r=0;
    
    }
    }
    
    
}