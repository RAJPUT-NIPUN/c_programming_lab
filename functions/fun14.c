#include<stdio.h>
char hd(char n,char m)
{
    int x,h=0;
    x=n^m;
    while(x!=0)
    {
      if(x&1)
      h++;
      x=x>>1;
    }
    return (h);
}
int main()
{
  char n,m,c,t;
  printf("enter characters");
  scanf("%c%c%c",&n,&t,&m);
  c=hd(n,m);
  printf("hamming distance is : %d",c);
  return 0;
}