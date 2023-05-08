#include <stdio.h>

int main(){
    double num1;
    double num2;
    char op;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("The sum of %lf and %lf is %lf.\n", num1, num2, num1 + num2);
    }   
    else if(op == '-'){
        printf("The difference of %lf and %lf is %lf.\n", num1, num2, num1 - num2);
    }
    else if(op == '*'){
        printf("The product of %lf and %lf is %lf.\n", num1, num2, num1 * num2);
    }
    else if(op == '/'){
        printf("The quotient of %lf and %lf is %lf.\n", num1, num2, num1 / num2);
    }
    else{
        printf("Invalid operator.\n");
    }
    return 0;
}