#include<stdio.h>

double simpleInterest(double,double,double);
int main() {
    
    double p,r,t;
    printf("Enter the values of p,r,t");
    scanf("%lf%lf%lf",&p,&r,&t);
    
    double k=simpleInterest(p,r,t); //call by value
    printf("%lf",k);
                                    
    return 0;
}

double simpleInterest(double a,double b,double c) {
    
    double simpleinterest;
    simpleinterest=(a*b*c)/100;
    return simpleinterest;
}
