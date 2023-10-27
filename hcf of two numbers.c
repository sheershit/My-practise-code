#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    
    
    for(int i=1;i<=(a<b?a:b);i++)
    {
        if(a%i==0 && b%i==0)
       printf("%d",i);
    }
 
    return 0;
}

