#include <iostream>
#include "Stack.h"
// test functionality for Peter's stack (Stack.h / Stack.cpp)
int main() {
    // create instance of the stack
    Stack myStack;
    // indicates whether program should end
    bool inUse = true;
    // user menu selection
    int operation = -1;
    // user data for push function
    int data;
    // Run stack functionality until user exits or enters invalid input.
    cout << "Select stack operation by entering the corresponding number:\n";
    cout << "\t1. Push\n";
    cout << "\t2. Pop\n";
    cout << "\t3. Print current stack\n";
    cout << "\t4. Exit\n";
    do {
        cout << "Enter operation number: ";
        // read user selection
        cin >> operation;
        if (operation == 1){ // push
            cout << "Enter an integer to push to the top of the stack: ";
            cin >> data;
            myStack.push(data);
        } else if (operation == 2){ // pop
            myStack.pop();
        } else if (operation == 3){ // print stack
            myStack.printStack();
        } else { // exit
            cout << "Exiting stack program.\n";
            inUse = false;
        }
    } while (inUse);

    // Running Peter's programs should result in a value of 42.
    return 42; // returns the correct answer on proper exit of main
}
// Peter Menchu 2020