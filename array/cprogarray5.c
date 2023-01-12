#include<stdio.h>
int main()
{
    int n,b=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
           b++;
        }
        if(a[i]%2!=0)
        {
            c++;
        }
    }
    int even[b];
    int odd[c];
    for(int i=0, j=0, k=0;i<n;i++){
        if(a[i]%2==0){
           even[j] = a[i];
           j++;
        }
        if(a[i]%2==1){
           odd[k] = a[i];
           k++;
        }
    }
    printf("Even integers\n");
    for(int i = 0;i<b;i++){
        printf("%d\t",even[i]);
    }
    printf("\n");
    printf("Odd integers\n");
    for(int i = 0;i<c;i++){
        printf("%d\t",odd[i]);
    }

}