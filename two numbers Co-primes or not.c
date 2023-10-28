#include<stdio.h>
int main() {
    int a,b,c;
    
    printf("Enter two nmbers");
    scanf("%d%d",&a,&b);
    
    for(int i=1;i<=(a<b?a:b);i++)
    {
        if(a%i==0 && b%i==0)
       c=i;
    }
    
    if(c==1)
    printf("Co prime number");
    else
    printf("Not co prime number");
    
    return 0;
    
}
