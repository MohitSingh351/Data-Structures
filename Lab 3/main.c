#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int top = -1;
int inp_array[SIZE];

void push();
void pop();
void display();

int main() {
    int choice;
    while(1) {
        printf("\nEnter the operations on the stack: \n");
        printf("\n1. Push\n2. Pop\n3. Display\n4.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice.");
        }
    }
}

void push () {
    int element;
    if (top == SIZE - 1) {
        printf("\nStack overflow.\n");
    } else {
        printf("\nEnter the element to be added to the stack: ");
        scanf("%d", &element);

        top = top + 1;
        inp_array[top] = element;
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack underflow.\n");
    } else {
        printf("\nElement %d is popped.\n", inp_array[top]);
        top = top - 1;
    }
}

void display() {
    if (top == -10) {
        printf("Stack underflow.");
    } else {
        printf("Elements of the stack are: ");
    }
    int i;
    for (i=top; i>=0; i--) {
        printf("%d, ", inp_array[i]);
    }
}