//2d array
#include<stdio.h>
int main()
{
    int n,dsum=0,adsum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
       { if(i==j){
            dsum=dsum+a[i][j];
        }
        if((i+j)==(n-1)){
            adsum=adsum+a[i][j];
        }
       }
        
    }
    printf("diagonal element sum is %d\n",dsum);
    printf("anti diagonal element sum is %d",adsum);


    
}