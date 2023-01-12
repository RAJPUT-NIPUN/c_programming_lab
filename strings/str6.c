//copy the string using function and without function
/*#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    fgets(s1,100,stdin);
    for(int i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    fputs(s2,stdout);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[100],s2[100];
   fgets(s1,100,stdin);
   strcpy(s2,s1);
   printf("copied string is %s",s2);
   return 0;
}

