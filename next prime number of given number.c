#include<stdio.h>
int main() {
    
    int i,n,x;
    printf("Enter the number");
    scanf("%d",&n);
    
    for(x=n+1; ;x++)
    {
        for(i=2;i<=x-1;i++)
        if(x%i==0)
         break;
   
    if(x==i) {
    printf("%d",x);
    break;
    }
    }
    return 0;
}
