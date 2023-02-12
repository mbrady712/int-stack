/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    Stack s1;

    //push()
    std::cout << "push() test: " << s1.push(10) << std::endl;

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

    //isEmpty()
    std::cout << "isEmpty() test: " << s1.isEmpty() << std::endl;

    //peek()
    int peekInt;

    std::cout << "peek() test: " << std::endl;

    try
    {
        peekInt = s1.peek();
        std::cout << "Int returned from peek(): " <<  peekInt << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Peek unsuccessful: " << e.what() << std::endl;
    }
}
