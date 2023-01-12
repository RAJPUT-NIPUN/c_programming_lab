#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sum=0,sd;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
    scanf("%f",&a[i]);
    sum=sum+a[i];}
    float mean;
    mean=sum/n;
    sum =0;
    for(int i=0;i<n;i++){
        sum=sum+pow((a[i]-mean),2);}
        sd=sqrt(sum/n);
        printf("%f",sd);


    

}
