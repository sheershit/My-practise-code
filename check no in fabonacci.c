#include<stdio.h>

int main() {
    int a,b,c,n;
     
     a=0,b=1;
    printf("Enter the numberth of term you will want to print");
    scanf("%d",&n);
    
    if(n==1)
    printf("0");
    
    else {
    for(int i=1;i<n;i++)
    {
        c=a+b;
        b=a;
       a=c; 
        
    }
    }
    printf("%d",c);
    return 0;
    
}
