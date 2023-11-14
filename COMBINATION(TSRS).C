#include<stdio.h>
int combination(int,int);

int main() {
    int n,r;
    printf("Enter the n combinations taken r at a time");
    scanf("%d%d",&n,&r);
    
    int k=combination(n,r);
    printf("%d",k);
    return 0;
}
    
int combination(int a,int b){
    
    int i,n,r,c;
    
    n=1,r=1,c=1;
    for(i=1;i<=a;i++)
    n=n*i;
    
    for(i=1;i<=b;i++)
    r=r*i;
    
    for(i=1;i<=(a-b);i++) 
    c=c*i;
    
    int p=n/(r*c);
    return p;
}
