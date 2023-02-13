/*********************
Name: Michael Brady
Programming Fundamentals III
Purpose: This program creates a stack ADT.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    Stack s1;

    //Code from lines 16 to 101 tests each function on the stack in each of its three possible states: empty, partially full, and full.
    //push()***********************************************

    std::cout << "push():" << std::endl;

    //Test push on empty stack to fill up the entire stack with numbers

    for(int i = 0; i < SIZE - 1; i++){
        std::cout << s1.push(TEST_VAL) << std::endl; 
    }

    //Test to push one more past limit
    std::cout << s1.push(TEST_VAL) << std::endl;

    //pop()***********************************************

    std::cout << "pop():" << std::endl;

    //Test pop on empty stack. This returns a stack underflow error.

    for(int i = 0; i < SIZE; i++){
        s1.pop();
    }

    try{
        std::cout << s1.pop() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Pop unsuccessful: " << e.what() << std::endl;
    }

    //Fill stack, then test pop on every stack element, so that the entire stack is emptied
    for(int i = 0; i < SIZE - 1; i++){
        s1.push(TEST_VAL); 
    }

    for(int i = 0; i < SIZE - 1; i++){
        std::cout << s1.pop() << std::endl;
    }

    //isEmpty()********************************************

    std::cout << "isEmpty():" << std::endl;

    //Test isEmpty on empty stack.

    std::cout << s1.isEmpty() << std::endl;

    //Test isEmpty on stack that has every possible amount filled.

    for(int i = 0; i < SIZE - 1; i++){
        s1.push(TEST_VAL);
        std::cout << s1.isEmpty() << std::endl;
    }
    
    //peek()************************************************

    std::cout << "peek():" << std::endl;

    //Test peek on empty stack

    for(int i = 0; i < SIZE - 1; i++){
        s1.pop();
    }

    try{
        std::cout << s1.peek() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Peek unsuccessful: " << e.what() << std::endl;
    }

    //Test peek on every element of full stack

    for(int i = 0; i < SIZE - 1; i++){
        s1.push(TEST_VAL);
        std::cout << s1.peek() << std::endl;
    }

    //Random operation testing***********************
    //Empty the stack
    for(int i = 0; i < SIZE - 1; i++){
        s1.pop();
    }

    std::cout << "Random operation testing (stack starts empty): " << std::endl;    

    for (int i = 0; i < RANDOM_RUNS; i++){
        int randNum = rand() % 4 + 1;
        switch(randNum) {
            case 1:
                std::cout << "push():" << std::endl;
                std::cout << s1.push(TEST_VAL) << std::endl;
            case 2:
                std::cout << "pop():" << std::endl;
                try{
                    std::cout << s1.pop() << std::endl;
                }
                catch(const std::exception& e){
                    std::cerr << "Pop unsuccessful: " << e.what() << std::endl;
                }
            case 3:
                std::cout << "isEmpty():" << std::endl;
                std::cout << s1.isEmpty() << std::endl;
            case 4:
                std::cout << "peek():" << std::endl;
                try{
                    std::cout << s1.peek() << std::endl;
                }
                catch(const std::exception& e){
                    std::cerr << "Peek unsuccessful: " << e.what() << std::endl;
                }
        }
    }
}
