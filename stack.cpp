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
    //Move x into stack
    if(top < SIZE){
        top++;
        contents[top] = x;
    }
    //Return true or false based on if entered properly
    return contents[top] == x;
}

