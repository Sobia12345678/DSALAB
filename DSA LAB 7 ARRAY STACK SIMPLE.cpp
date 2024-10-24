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
    
    
    push('A');
    push('B');
   push('C');
    
    cout << "Top element: " << peek() << endl;
    
    cout << "Popped element: " << pop() << endl;
    cout << "Top element after pop: " << peek() << endl;

    return 0;
}
