//to count the number of vowels and consonents in a string
#include<stdio.h>
int main()
{
    int b=0,c=0;
    char s[100];
    fgets(s,100,stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            if(s[i]=='a'|| s[i]=='A'|| s[i]=='e'|| s[i]=='E'|| s[i]=='i'|| s[i]=='I'|| s[i]=='o'|| s[i]=='O'|| s[i]=='u'|| s[i]=='U'){
                b++;
            }
            else{
                c++;
            }
        }
    }
    printf("number of vowels are %d\n",b);
     printf("number of consonents are %d",c);
     return 0;
}