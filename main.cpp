/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    Stack s1;
    std::cout << "push() test: " << s1.push(10) << std::endl;
    std::cout << "Int returned from pop(): " << s1.pop() << std::endl;
    std::cout << "Int returned from peek(): " << s1.peek() << std::endl;
    std::cout << "isEmpty() test: " << s1.isEmpty() << std::endl;
    std::cout << "Contents of stack: " << std::endl;
    for(int i = 0; i < sizeof(s1.contents)/sizeof(int); i++){
        std::cout << s1.contents[i] << std::endl;
    }
}
