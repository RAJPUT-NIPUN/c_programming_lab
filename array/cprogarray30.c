//2d array
#include<stdio.h>
int main()
{
    int n,b=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]==1)
                b++;
            }
            else if(a[i][j]==0)
            b++;
        }
        }
        if(b==(n*n)){
            printf("identical matrix");
        }
        else 
        printf("not identical matrix");
        return 0;
    
}
    