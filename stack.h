/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <iostream>

#define SIZE 10
#define BOTTOM -1

class Stack
{
public:
    Stack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
private:
    int contents[SIZE]; 
    int top;
};

#endif //STACK_STACK_H