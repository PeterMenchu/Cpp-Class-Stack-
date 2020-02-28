// Created by Peter Menchu on 2/27/20.
// Class implementation of a stack using an array to hold
// data and form the representation of the stack.
#ifndef PETER_S_STACK_CLASS_STACK_H
#define PETER_S_STACK_CLASS_STACK_H

#include <iostream>
using namespace std;

class Stack {
    private:
        // top index represents the current size of the
        // stack, and represents the array index of the
        // top node.
        int topIndex;
        // this is the array to represent the structure.
        // Notice that my current implementation uses a
        // static array, but I will update this.
        int stackArray[100];
    public:
        Stack();
        void printStack();
        void push(int data);
        void pop();
};

// Peter Menchu 2020
#endif //PETER_S_STACK_CLASS_STACK_H
