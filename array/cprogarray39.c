//2d array
#include<stdio.h>
int main()
{
    int det,i,j;
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            det=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))+a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
        }
    }
    printf("determinent is %d",det);
    return 0;
}