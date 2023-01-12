//2d array
#include<stdio.h>
int main()
{
    int m,n,sum=0,average;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=sum+a[i][j];
        }
    }
    average=sum/(m*n);
    printf("%d\n",sum);
     printf("%d",average);


}