//length of a string without using function
#include<stdio.h>
int main()
{
    int b=0;
    char s[100];
    fgets(s,100,stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        b++;
    }
    printf("%d",b);
    return 0;
}