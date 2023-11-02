#include <stdio.h>
  int main() {
  int i,j,p,d,sum,y,x,n;
  p=1,sum=0;
  
  y=x;//taki delete na hojaye;
  
  while(y!=0)
  {
      y=y/10;
      n=n+1;
      
  }
  
  for(y=x;y!=0;y++)
  {
      d=y%10;
      for(i=1;i<=n;i++)
      p=p*d;
      
      sum=sum+p;
  }
  
  if(sum ==x)
  printf("Armstrong number");
  else
  printf("Not Armstrong number");

    return 0;
}
