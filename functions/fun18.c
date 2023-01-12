//call by reference
#include<stdio.h>
int swap(int *n,int *m)
{
    int c;
    c=*n;
    *n=*m;
    *m=c;
}
int main(){
int a,b;
printf("enter numbers");
scanf("%d%d",&a,&b);
printf("value before swap a=%d and b=%d\n",a,b);
swap(&a,&b);
printf("value after swap a=%d and b=%d",a,b);
return 0;
}