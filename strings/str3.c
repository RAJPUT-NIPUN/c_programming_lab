//to print the vowels
#include<stdio.h>
int main()
{ int b=0,c=0;
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='A'|| str[i]=='e'|| str[i]=='E'||  str[i]=='i'|| str[i]=='I'|| str[i]=='o'|| str[i]=='O' || str[i]=='u'|| str[i]=='U')
        b++;
         
    }
    printf("vowerls are %d",b);
    
}