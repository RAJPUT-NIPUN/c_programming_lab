//2d array
#include<stdio.h>
int main()
{
    int m,n,sum=0;
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
        printf("sum of row is %d\n",sum);
        sum=0;
        continue;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           sum=sum+a[j][i];
        }
        printf("sum of coloumn is %d\n",sum);
        sum=0;
        continue;
    }
    

}