#include<stdio.h>

void natural_number(int);

int main() {
    
    int x=10;
    
    natural_number(x);
    return 0;
    
}

void natural_number(int n){
    
    int i;
    for(i=1;i<=n;i++)
    printf("%d",i);
    
    
}
