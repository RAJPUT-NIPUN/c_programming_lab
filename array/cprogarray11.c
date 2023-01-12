#include<stdio.h>
int main()
{
    int n,i,greatest,smallest,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    greatest=0;
    smallest=0;
    for(int i=0;i<n;i++){
        if(a[greatest]<a[i])
        greatest=i;
        if(a[smallest]>a[i])
        smallest=i;
        }
    c=a[greatest];
    a[greatest]=a[smallest];
    a[smallest]=c;
    printf("New array:\n");
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}