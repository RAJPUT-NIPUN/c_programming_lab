//to check the string is palandrom or not
#include<stdio.h>
#include<string.h>
int main()
{ 
    int c=0,d=0,j=0;
    char s[1000];
    gets(s);
     c=strlen(s);
    
    for(j=0;j<c;j++){
        if(s[j]==s[c-j-1])
        d++;
    }
    if(d==j){
        printf("palandrom");
    }
    else {
    printf("not palandrom");
    }
    return 0;
}