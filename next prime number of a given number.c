#include<stdio.h>
int main() {
    int i,j,n;
    
    printf("Enter the number");
    scanf("%d",&n);
    
    for(i=n+1; ;i++)
    {
        for(j=2;j<=i-1;j++)
        if(i%j==0)
        break;

    if(i==j){
        printf("next prime number is %d",j);
        break;
    }
    }
    return 0;
    
}
