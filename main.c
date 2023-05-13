#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define note "Enter a valid Operator"
void addition();
void substraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
int func(int ,int ,char );
int main(){
    printf("\t\tWelcome to the Scientific Calculator!!\n\n");
    int choice;
    printf("\n***Press 0 to Quit the program***\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n ");
    printf("Enter 4 for Division\n ");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Factorial\n");
    printf("Enter 7 for Power\n");
    printf("Enter 8 for Factorial\n ");
    printf("Enter 9 for cube\n");
    printf("Enter 10 for Squareroot\n");
    while (1)
    {
        printf("\n\nEnter the operation you want to do:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            substraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
           division();
           break;
        case 5:
           modulus();
           break;
        case 6:
          factorial();
          break;
        case 7:
          power();
          break;
        case 8:
          factorial();
          break;
        case 9:
          cube();
          break;
        case 10:
          squareroot();
          break;
        case 0:
         exit(0);
         break;
        default:
           printf("\n*******%s*******\n",note);
        
        }
        
    }
    return 0;
}
void addition(){
    printf("Enter the number you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and  is %d\n",a+b);
}
void substraction(){
    printf("Enter the number you subsract:");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subscracted values is %d\n",a-b);

}
void multiplication(){
    printf("Enter the number you want to Multiply:");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiple value is %d\n",a*b);
}
void division(){
    printf("Enter the number you want to division: ");
    float a,b;
    scanf("%f%f", &a,&b);
    printf("The divided values is %f\n",a/b);
}
void modulus(){
    printf("Enter the number to find the modulus of :");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    printf("Enter the number of which you want to find the factorial: ");
    int n;
    scanf("%d",&n);
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("Enter the base  and the power: ");
    scanf("%lf%lf",&b,&p);
    double e= pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want to square: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of the %lfis %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want to cube: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of the %lfis %lf",b,p);
}
void squareroot(){
    double b;
    printf("Enter the number you want to squareroot: ");
    scanf("%lf",&b);
    double p=sqrt(b);
    printf("The squareroot of the %lfis %lf",b,p);
}





