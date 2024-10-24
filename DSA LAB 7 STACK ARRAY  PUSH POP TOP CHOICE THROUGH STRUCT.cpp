#include <iostream>
using namespace std;

#define MAX 100  // Maximum size of the stack

// Define the Stack struct
struct Stack {
    char arr[MAX];  // Array to store the stack elements
    int top;        // Top of the stack
};

// Function to initialize the stack
void initialize(Stack &stack) {
    stack.top = -1;  // Initialize stack as empty
}

// Function to push a character onto the stack
void push(Stack &stack, char c) {
    if (stack.top >= (MAX - 1)) {
        cout << "Stack Overflow\n";
    } else {
        stack.arr[++stack.top] = c;
        cout << c << " pushed into stack\n";
    }
}

// Function to pop a character from the stack
char pop(Stack &stack) {
    if (stack.top < 0) {
        cout << "Stack Underflow\n";
        return '\0';
    } else {
        return stack.arr[stack.top--];
    }
}

// Function to get the top character of the stack
char peek(Stack &stack) {
    if (stack.top < 0) {
        cout << "Stack is Empty\n";
        return '\0';
    } else {
        return stack.arr[stack.top];
    }
}

// Function to check if the stack is empty
bool isEmpty(Stack &stack) {
    return (stack.top < 0);
}

int main() {
    Stack stack;  // Create a stack
    initialize(stack);  // Initialize the stack
    int choice;
    char element;

    while (true) {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter character to push: ";
                cin >> element;
                push(stack, element);
                break;
            case 2:
                element = pop(stack);
                if (element != '\0') {
                    cout << "Popped element: " << element << endl;
                }
                break;
            case 3:
                element = peek(stack);
                if (element != '\0') {
                    cout << "Top element: " << element << endl;
                }
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
