#include<stdio.h>
int main()
{
    int n,c=0,d,e,f;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    d=0;
    for(int i=0;i<n;i++){
        f=a[i];
        e=1;
    for(int j=0;j<d;j++){
        if(f==b[j]){
            e=0;
        }
    }
    if(e==1){
        b[d]=f;
        d++;

    }

    }
    printf("new array");
    for(int i=0;i<d;i++)
    printf("%d\n",b[i]);
        
   
}