//to find the number of a occuerence of a character
#include<stdio.h>
int main()
{
    int c=0;
    char ch;
    char s[100];
    scanf("%[^\n]s",s);
    printf("enter the character you want to search\n");
    scanf("%c%c",&ch,&ch);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            c++;
        }
    }
    printf("number of occuerences of a character is %d",c);
    return 0;
}