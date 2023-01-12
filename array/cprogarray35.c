//2d array
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==(n-1) || j==0 || j==(n-1)){
                printf("%d\t",a[i][j]);
            }
            else
            printf("\t");
        }
        printf("\n");
    }
    return 0;

}