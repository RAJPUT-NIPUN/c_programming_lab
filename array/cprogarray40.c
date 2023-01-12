//2d array
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    int d[m][n];
    printf("enter first matrics\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter second matrics\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("multiply of matrics\n");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          d[i][j]=0;
          for( int k=0;k<n;k++){
            d[i][j]=d[i][j]+a[i][k]*b[k][j];
          }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    return 0;

}