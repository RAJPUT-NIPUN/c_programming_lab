//tro print integer,alphabet ,special characters in different strings
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    char str5[100];
    fgets(str1,100,stdin);
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]=='a'|| str1[i]=='A'|| str1[i]=='e'|| str1[i]=='E'||  str1[i]=='i'|| str1[i]=='I'|| str1[i]=='o'|| str1[i]=='O' || str1[i]=='u'|| str1[i]=='U')
        {
            str2[a]=str1[i];
            a++;
        }
        else if(str1[i]=='b'|| str1[i]=='B'|| str1[i]=='c'|| str1[i]=='C'||  str1[i]=='d'||str1[i]=='D'|| str1[i]=='f'|| str1[i]=='F'|| str1[i]=='g'||  str1[i]=='G'||str1[i]=='h'|| str1[i]=='H'|| str1[i]=='j'|| str1[i]=='J'||  str1[i]=='k'||str1[i]=='K'|| str1[i]=='l'|| str1[i]=='L'|| str1[i]=='m'||  str1[i]=='M'||str1[i]=='n'|| str1[i]=='N'|| str1[i]=='p'|| str1[i]=='P'||  str1[i]=='q'||str1[i]=='Q'|| str1[i]=='r'|| str1[i]=='R'|| str1[i]=='s'||  str1[i]=='S'||str1[i]=='t'|| str1[i]=='T'|| str1[i]=='v'|| str1[i]=='V'||  str1[i]=='w'||str1[i]=='W'|| str1[i]=='x'|| str1[i]=='X'||str1[i]=='y'|| str1[i]=='Y'|| str1[i]=='z'|| str1[i]=='Z'){
            str3[b]=str1[i];
            b++;
        }
        else if(str1[i]>='0' && str1[i]<='9'){
            str4[c]=str1[i];
            c++;
        }
        else{
        str5[d]=str1[i];
        d++;
        }
    }
    puts(str2);
    puts(str3);
    puts(str4);
    puts(str5);
    return 0;
}