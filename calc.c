#include <stdio.h>
#include <stdlib.h>

//sum operation
int sum(int a, int b) {
    return a + b;
}

//subtract operation
int min(int a, int b) {
    return a - b;
}

//multiply by operation
int times(int a, int b) {
    return a * b;
}

//divide by operation
float divBy(int a, int b) {
    return (float)a / b;
}

void displayResult(int opt, int num1, int num2) {
    //helps reading code
    #define SUM 1
    #define SUBTRACT 2
    #define MULTIPLY 3
    #define DIVIDE 4

    int answer = 0;

    switch (opt) {
        case SUM:
            answer = sum(num1, num2);
            printf("Your sum: %d", answer);
            break;
        case SUBTRACT:
            answer = min(num1, num2);
            printf("Your subtraction: %d", answer);
            break;
        case MULTIPLY:
            answer = times(num1, num2);
            printf("Your product: %d", answer);
            break;
        case DIVIDE:
            float floatAnswer = 0;
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
                return;
            } else {
                floatAnswer = divBy(num1, num2);
                printf("Your division: %.2f", floatAnswer);
            }
            break;
        default:
            printf("Invalid option! Please run the program again.\n");
            break;
    }
}

void displayMenu() {
    printf("[1] Sum two numbers\n");
    printf("[2] Subtract two numbers\n");
    printf("[3] Multiply two numbers\n");
    printf("[4] Divide by two numbers\n");
}

int operationScreen() {
    int option = 0;

    system("clear");
    displayMenu();
    
    printf("\nNow, choose one of the options above: ");
    scanf("%d", &option);
    printf("\n");
    system("clear");

    return option;
}

int main() {
    int menuOption, num1, num2;
    menuOption = num1 = num2 = 0;

    printf("Hello There! \nPlease, type two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    menuOption = operationScreen();
    displayResult(menuOption, num1, num2);
    
    return 0;
}
