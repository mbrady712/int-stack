/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <iostream>

#define SIZE 10

class Stack
{
public:
    int top;
    int contents[SIZE]; 

    Stack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

#endif //STACK_STACK_H