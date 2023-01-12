// to print last occuerence
#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    char s1[100];
    fgets(s1,100,stdin);
   for(int i=0;s1[i]!='\0';i++){
    if((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z')){
    c=s1[i];
    }
   }
   printf("%c",c);
    
}