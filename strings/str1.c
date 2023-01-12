//to check number of words
#include<stdio.h>
int main()
{ int b=0;
    char str[100];
    printf("enter string\n");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '){
            b++;
        }
    }
    printf("number of words are %d ",b+1);
    return 0;
}