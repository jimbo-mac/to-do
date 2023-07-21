#include <iostream>
#include "todo.h"
#include <vector>

int main() {

    std::cout << "Welcome to the To-Do App" << std::endl;
    std::cout << "Enter a command to start" << std::endl;

    char command;
    std::vector<ToDo> todoList;
    std::string title;
    int priority;

    std::cout << "Actions include:" << std::endl;
    std::cout << "\'p' to print the current ToDo list" << std::endl;
    std::cout << "\'a' to add a task to the list" << std::endl;
    
    while(1){
        std::cin >> command;

        if(command == 'a'){
            std::cout << "Enter task title: ";
            std::cin >> title;
            std::cout << "Enter task priority (1 lowest - 10 highest): ";
            std::cin >> priority;
            ToDo todo(title, priority, false);
            todoList.push_back(todo);
        }
        else if (command == 'p'){
            
            for(int i = 0; i < todoList.size(); i++){
                todoList[i].printTask();
            }
        }
        else{
             std::cout << "Error: Invalid Command" << std::endl;
        }
    }

    return 0;

}