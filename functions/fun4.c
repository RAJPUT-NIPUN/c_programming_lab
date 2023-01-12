#include<stdio.h>
int prime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
    if(n%i==0)
    c++;}
    if(c==2)
    return 1;
    else 
    return 0;
}
int main()
    {
        int n,m;
        printf("enter numbers");
        scanf("%d%d",&n,&m);
        for(int j=n;j<=m;j++){
        if(prime(j)==1){
            printf("%d\n",j);
        }
        }
        return 0; 
    }