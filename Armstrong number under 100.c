
#include<stdio.h>
int main() {
    int x,y,n,d,p,i,sum;
    
    for(x=1;x<=100;x++)
    {
        y=x;
        n=1,sum=0;
        
       while(y!=0)
       {
          y=y/10;
          n=n+1;
       }
       
       for(y=x;y!=0;y=y/10)
       {
           d=y%10;
           
           for(i=1;i<=n;i++)
           p=p*d;
           
           sum=sum+p;
       }
       if(sum==x)
       printf("%d ",x);
       
       
    }
    return 0;
    
}
