#include<stdio.h>
int add(int a,int b);

int main() {
    int x=10,y=20;
    int k=add(x,y);// call by value
    printf("%d",k);
    
    return 0;
    
}
int add(int a,int b) {
    
    int c;
    c=a+b;
    return c;
}
