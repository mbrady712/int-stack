/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    Stack s1;

    //push()***********************************************

    //Successful push: returns 1/true

    std::cout << s1.push(2) << std::endl;

    //Push until unsuccessful push and stack overflow: returns 0/false

    for(int i = 0; i < SIZE - 1; i++){
        s1.push(3);
    }

    std::cout << s1.push(4) << std::endl;

    //pop()************************************************

    //Successful pop. Returns last int that was successfully pushed above.

    std::cout << s1.pop() << std::endl;

    //Unsuccessful pop. Empty the stack, then call pop. This returns a stack underflow error.

    for(int i = 0; i < SIZE - 1; i++){
        s1.pop();
    }

    try{
        s1.pop();
    }
    catch(const std::exception& e){
        std::cerr << "Pop unsuccessful: " << e.what() << std::endl;
    }

    //isEmpty()********************************************

    //Test on empty stack (stack was emptied from earlier code). Will return 1/true.

    std::cout << s1.isEmpty() << std::endl;

    //Test on stack that is not empty. Will return 0/false.

    s1.push(5);

    std::cout << s1.isEmpty() << std::endl;

    //peek()*************************************************

    //Successful peek. Returns the last int pushed to the stack.

    std::cout << s1.peek() << std::endl;

    //Unsuccessful peek on empty stack

    s1.pop();

    try{
        s1.peek();
    }
    catch(const std::exception& e){
        std::cerr << "Peek unsuccessful: " << e.what() << std::endl;
    }
}
