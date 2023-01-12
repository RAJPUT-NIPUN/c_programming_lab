//length of a string with function
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,100,stdin);
    printf("length of a string is %zu",strlen(s));
    return 0;
}