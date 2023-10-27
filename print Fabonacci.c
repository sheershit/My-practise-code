#include<stdio.h>

int main() {
    
    int a,b,c,n;
    printf("enter the number");
    scanf("%d",&n);
    
    a=-1,b=1;
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
    
}
