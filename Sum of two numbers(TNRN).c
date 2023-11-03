#include<stdio.h>

  void add();
  
int main() {
    
    add();
    return 0;
}

 void add() {
        int a,b,c;
        printf("Enter the number");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("%d",c);
    }
