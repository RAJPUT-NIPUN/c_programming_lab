#include<stdio.h>
int main()
{
    int sumb=0,sumt=0,c=0,d=0;
    int a[10];
    printf("enter votes of biden in each states");
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    sumb=sumb+a[i];
    }
    int b[10];
    printf("enter votes of trump in each states");
    for(int i=0;i<10;i++){
        scanf("%d",&b[i]);
        sumt=sumt+b[i];
    }
    for(int i=0;i<10;i++){
        if(a[i]>b[i]){
            c++;
             }
             else
             d++;
    }
    if(c++>d++)
        printf("state wise winner is biden\n");
    else
     printf("state wise winner is trump\n");
     if(sumb>sumt)
         printf("over all  winner is biden\n");
         else
            printf("over all  winner is trump\n");

}