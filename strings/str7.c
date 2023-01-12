//concatenate the string
#include<stdio.h>
#include<string.h>
int main()
{
    int b=0,j;
    char s1[100];
    char s2[100];
    char s3[200];
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    strcpy(s3, s1);
    strcat(s3, s2);
    printf("concatenate string \n");
    puts(s3);
    return 0;
}