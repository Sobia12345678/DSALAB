#include <iostream>
using namespace std;

#define MAX 100  // Maximum size of the stack

class Stack {
private:
    char arr[MAX];  // Array to store the stack elements
    int top;        // Top of the stack

public:
    Stack() {
        top = -1;  // Initialize stack as empty
    }

    // Function to push a character onto the stack
    void push(char c) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = c;
            cout << c << " pushed into stack\n";
        }
    }

    // Function to pop a character from the stack
    char pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return '\0';
        } else {
            char c = arr[top--];
            return c;
        }
    }

    // Function to get the top character of the stack
    char peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return '\0';
        } else {
            return arr[top];
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;
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
                stack.push(element);
                break;
            case 2:
                element = stack.pop();
                if (element != '\0') {
                    cout << "Popped element: " << element << endl;
                }
                break;
            case 3:
                element = stack.peek();
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
