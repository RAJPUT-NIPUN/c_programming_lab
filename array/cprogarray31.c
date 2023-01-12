//2d array
#include<stdio.h>
int main()
{
    int n,b=0,c=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0)
                b++;
        }
            }
            if(b>(n*n)/2)
            printf("sparse matrix");
        
         else 
         printf("dense matrix");
        
}