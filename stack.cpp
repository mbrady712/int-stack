/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "stack.h"

Stack::Stack(){
    top = BOTTOM;
}

bool Stack::push(int x){
    if(top < SIZE - 1){
        top++;
        contents[top] = x;
    }
    return top < SIZE - 1;
}

int Stack::pop(){
    if(top == -1){
        throw std::underflow_error("Stack Underflow");
    }else{
        top--;
    }
    return contents[top + 1];
}

bool Stack::isEmpty(){
    return top == -1;
}

int Stack::peek(){
    if(top == -1){
        throw std::underflow_error("The stack is empty");
    }
    return contents[top];
}