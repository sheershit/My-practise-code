#include<stdio.h>
int main() {
    int a,b,c,n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    
    a=0,b=1;
    printf("%d\n",a);
    
    for(int i=1;i<n;i++)
    {
        c=a+b;
        b=a;
        a=c;
        printf("%d\n",c);
    }
    return 0;
    
}
