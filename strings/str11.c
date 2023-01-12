//to print the string the reverse
#include<stdio.h>
int main()
{
    char s[100];
    char rev[100];
    scanf("%[^\n]s",s);
     int i,l;
    for(l=0;s[l];l++)
    for(i=0;s[i];i++)
    rev[i]=s[l-i];
    rev[i]='\0';
    printf("\nreverse=%s",rev);
    return 0;

}