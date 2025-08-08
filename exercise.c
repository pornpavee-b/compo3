#include <stdio.h>

int main() {
    int num1, num2;
    int sum, sub, mul, divide;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op) {
        case '+':
            sum = num1 + num2;
            printf("Answer = %d\n", sum);
            break;
        case '-':
            sub = num1 - num2;
            printf("Answer = %d\n", sub);
            break;
        case '*':
            mul = num1*num2;
            printf("Answer = %d\n", mul);
            break;
        case '/':
            divide = num1 / num2;
            printf("Answer = %d\n", divide);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
