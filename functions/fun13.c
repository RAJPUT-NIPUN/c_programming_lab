#include<stdio.h>
int hd(int n,int m)
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
  int n,m,c;
  printf("enter numbers");
  scanf("%d%d",&n,&m);
  c=hd(n,m);
  printf("hamming distance is : %d",c);
  return 0;
}