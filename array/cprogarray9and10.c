#include<stdio.h>
int main()
{
    int n,greatest,smallest;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    greatest=a[0];
    smallest=a[0];
    for(int i=0;i<n;i++){
        if(greatest<=a[i])
        greatest=a[i];
        if(smallest>=a[i])
        smallest=a[i];

    }
    printf("greatest element in array is %d\n",greatest);
    printf("smallest element in array is %d\n",smallest);
    return 0;
}