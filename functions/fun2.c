#include<stdio.h>
int check(int n){
    if(n%2==0)
    return 1;
    else 
    return 0;
}
int main()
    {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=n;i<=m;i++)
        if(check(i)==1)
        printf("%d\n",i);
        return 0;
    }
