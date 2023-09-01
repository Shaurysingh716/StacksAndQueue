#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1; // Initialize the front and rear of the queue
int rear = -1;

void Enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot add more elements.\n");
    } else {
        if (front == -1) {
            front = 0; // If the queue was empty, set the front to 0
        }
        rear++;
        queue[rear] = value; // Add the value to the rear of the queue
    }
}

int Dequeue() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return -1; // Return a sentinel value to indicate an empty queue
    } else {
        int value = queue[front];
        if (front == rear) {
            // If there's only one element in the queue, reset front and rear
            front = rear = -1;
        } else {
            front++;
        }
        return value;
    }
}

void PrintQueue() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    while (1) {
        printf("Queue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print Queue\n");
        printf("4. Quit\n");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number to enqueue: ");
                int value;
                scanf("%d", &value);
                Enqueue(value);
                break;
            case 2:
                printf("Dequeued value: %d\n", Dequeue());
                break;
            case 3:
                PrintQueue();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
