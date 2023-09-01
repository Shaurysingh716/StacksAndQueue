#include <stdio.h>

#define MAX_SIZE 100

void StackOperation() {
    int stack[MAX_SIZE];
    int top = -1; // Initialize the top of the stack to -1

    while (1) {
        printf("Enter a number to add to the stack (0 to quit): ");
        int userInput;
        scanf("%d", &userInput);

        if (userInput == 0) {
            break;
        }

        if (top < MAX_SIZE - 1) {
            stack[++top] = userInput; // Push the value onto the stack
        } else {
            printf("Stack is full. Cannot add more elements.\n");
        }
    }

    printf("Stack elements:\n");
    while (top >= 0) {
        printf("%d\n", stack[top--]); // Pop and print elements from the stack
    }
}

int main() {
    StackOperation();
    return 0;
}
