//to print number of alphabets ,number,special characters
#include<stdio.h>
int main()
{
    int b=0,c=0,d=0;
    char str[100];
    fgets(str,100,stdin);
    puts(str);
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        b++;
     else if(str[i]>='0' && str[i]<='9')
     c++;
     else
     d++;
    }
     printf("number of alphabets are %d\n",b);
     printf("number of integers are %d\n",c);
     printf("special characters are %d",d);
     return 0;
    
    
}