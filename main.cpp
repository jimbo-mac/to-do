#include <iostream>
#include "todo.h"

int main() {

    std::cout << "Welcome to the To-Do App" << std::endl;
    
    ToDo todo("Dig a hole", 10, true);

    std::cout << todo.getName() << std::endl;
    std::cout << todo.getPriority() << std::endl;
    std::cout << todo.getStatus() << std::endl;

    return 0;
    
}