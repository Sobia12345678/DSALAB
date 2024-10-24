#include <iostream>
using namespace std;

#define MAX 100  

    char arr[MAX];  
    int top;        

    void push(char c) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = c;
            cout << c << " pushed into stack\n";
        }
    }

    
    char pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return '\0';
        } else {
            char c = arr[top--];
            return c;
        }
    }

    
    char peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return '\0';
        } else {
            return arr[top];
        }
    }

    
    bool isEmpty() {
        return (top < 0);
    }


int main() {
   
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
                push(element);
                break;
            case 2:
                element = pop();
                if (element != '\0') {
                    cout << "Popped element: " << element << endl;
                }
                break;
            case 3:
                element = peek();
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
