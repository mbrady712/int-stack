/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "stack.h"

Stack::Stack(){
    top = BOTTOM;
}

bool Stack::push(int val){
    bool success = false;
    if(top < SIZE - 1){
        top++;
        contents[top] = val;
        success = true;
    }
    return success;
}

int Stack::pop(){
    if(top < 0){
        throw -1;
    }else{
        top--;
    }
    return contents[top + 1];
}

bool Stack::isEmpty(){
    return top < 0;
}

int Stack::peek(){
    if(top < 0){
        throw -1;
    }
    return contents[top];
}