#include <iostream>
using namespace std;

#define MAX 100  

class Stack {
private:
    char arr[MAX];  
    int top;        

public:
    Stack() {
        top = -1;  
    }

    
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
};

int main() {
    Stack stack;
    
    stack.push('A');
    stack.push('B');
    stack.push('C');
    
    cout << "Top element: " << stack.peek() << endl;
    
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Top element after pop: " << stack.peek() << endl;

    return 0;
}
