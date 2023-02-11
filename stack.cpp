/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "stack.h"

Stack::Stack(){
    top = -1;
}

bool Stack::push(int x){
    //Check top < SIZE -1
    if(top < SIZE - 1){
        //if yes, increment top and put element on the stack at top
        top++;
        contents[top] = x;
    }
    //if no, overflow error
    return contents[top] == x;
}

int Stack::pop(){
    //Check top == -1. If yes, underflow error
    if(top == -1){
        throw std::underflow_error("Stack Underflow");
    }else{
        //If no, return element at top and decrement top
        return contents[top];
        top--;
    }
}
