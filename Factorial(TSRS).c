#include<stdio.h>
int factorial(int);

int main() {
    int x=3;
    int k=factorial(x);
    printf("%d",k);
    return 0;
}

int factorial(int n){
    int i,fact=1;
    
    for(i=1;i<=n;i++) 
    fact=fact*i;
    return fact;
}
