// Created by Peter Menchu on 2/27/20.
// Implementation of Peter's stack class.
// This version holds an integer as node data, and can
// perform push, pop, and print, as well as handle
// some user errors, though there are a couple checks
// that still need to be added.
#include "Stack.h"

// constructor for Peter's stack
Stack::Stack() {
    // assuming data values will be positive, a
    // negative value is used to represent a new
    // or empty stack.
    topIndex = -1;
    cout << "Stack initialized.\n";
}

void Stack::printStack() {
    if (topIndex != -1){
        cout << "Current stack:\n";
        // print stack from top down
        cout << "\tTop\n";
        for (int i = topIndex; i >= 0; i--){
            cout << "\t";
            cout << stackArray[i] << endl;
        }
        cout << "\tBottom\n";
    } else {
        cout << "The stack is empty.\n";
    }
}
// push/add top function
void Stack::push(int data) {
    // increment before using to move -1 to 0 first time
    // and consistently increment the value when pushing
    // to the stack.
    stackArray[++topIndex] = data;
    cout << "Pushed " << data << endl;
}
// pop/remove top function
void Stack::pop() {
    if (topIndex != -1) {
        // Decrement top to lose track of the top node.
        // This way it can just be rewritten by a push later.
        topIndex--;
        cout << "Popped " << stackArray[topIndex+1] << endl;
    } else { // top index is set to -1
        cout << "Stack is empty, no nodes to remove.\n";
    }
}
// Peter Menchu 2020