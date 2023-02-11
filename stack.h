/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#ifndef STACK_STACK_H
#define STACK_STACK_H

class Stack
{
public:
    int top;
    int contents[10]; 

    Stack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

#endif //STACK_STACK_H