#include<stdio.h>

void natural_number(int);// function decleration

int main() {
    int x=5;
    natural_number(x);
    return 0;
    
}
void natural_number(int n){
    int i;
    for(i=1;i<=n;i++)
    printf("%d",2*i-1);// for odd
}
