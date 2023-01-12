#include<stdio.h>
int main()
{
    int n,c,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
    }
    printf("array in ascending order is ");
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;


}