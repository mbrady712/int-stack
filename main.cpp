/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    Stack s1;

    //push()

    std::cout << "Results of push(): ";

    if(s1.push(10) == 1){
        std::cout << "Push successful." << std::endl;
    }else{
        std::cout << "Push unsuccessful: Stack overflow" << std::endl;
    }

    //pop()
    int popped;

    std::cout << "Results of pop(): ";

    try{
        std::cout << "Pop successful. Int returned from pop(): " <<  s1.pop() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Pop unsuccessful: " << e.what() << std::endl;
    }

    //isEmpty()
    std::cout << "Results of isEmpty(): ";
   
    if(s1.isEmpty() == 1){
        std::cout << "Stack is empty." << std::endl;
    }else{
        std::cout << "Stack is not empty." << std::endl;
    }

    //peek()
    int peekInt;

    std::cout << "Results of peek(): ";

    try{
        peekInt = s1.peek();
        std::cout << "Int returned from peek(): " <<  peekInt << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Peek unsuccessful: " << e.what() << std::endl;
    }
}
