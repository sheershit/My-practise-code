#include<stdio.h>
int main() {
    int a,b,c,n;
    
    a=0,b=1;
    printf("Enter the term");
    scanf("%d",&n);
    
    while(1) {
        
        c=a+b;
        a=b;
        a=c;
    
       if(c==n)
       break;
    }
    
    if(c==n)
    printf("number is in fabocanni series");
    else
    printf("Number is not in fabocanni series");
    
    return 0;
}
