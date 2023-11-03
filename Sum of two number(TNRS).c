#include<stdio.h>

int add();

int main() {
    int k;
    k=add();
    printf("%d",k);
    
    return 0;
}


int add() {
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    
    c=a+b;
   return c;
    
}
