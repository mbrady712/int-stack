/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    Stack s1;

    //push()
    std::cout << "push() test: " << std::endl;

    //pop()

    int popped;

    std::cout << "pop() test: " << std::endl;

    try
    {
        popped = s1.pop();
        std::cout << "Pop successful. Int returned from pop(): " <<  popped << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Pop unsuccessful: " << e.what() << std::endl;
    }

    //For debugging purposes only. Delete after program completion
    std::cout << "Contents of stack: " << std::endl;
    for(int i = 0; i < sizeof(s1.contents)/sizeof(int); i++){
        std::cout << s1.contents[i] << std::endl;
    }
}
