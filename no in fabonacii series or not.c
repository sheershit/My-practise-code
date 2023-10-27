#include<stdio.h>
int main() {
    int a,b,c,n;
    
    printf("Enter the number");
    scanf("%d",&n);
    a=1,b=-1;
    for(int i=0;  ;i++)
    {
        c=a+b;
        
        if(c==n)
        {
            printf("number in series");
            break;
        }
        
        if(c>n) {
        printf("number is not in series");
        break; // loop sebahr aane ki hai
        
        }
        a=b;
        b=c;
        
    }
    return 0;
    
}

