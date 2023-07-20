#ifndef TODO_H
#define TODO_H

#include <string>

class ToDo {
    public:

        ToDo();
        ToDo(std::string newName, int newPriority, bool status);
        ~ToDo();

        void setName(std::string newName);
        void setPriority(int newPriority);
        void setStatus(bool status);

        std::string getName();
        int getPriority();
        bool getStatus();

    private:

        std::string name;
        int priority;
        bool done;
};

ToDo::ToDo(){
    name = "New Item";
    priority = 5;
    done = false;
}

ToDo::~ToDo(){
    // delete data
}

ToDo::ToDo(std::string newName, int newPriority, bool status){
    name = newName;
    priority = newPriority;
    done = status;
}

std::string ToDo::getName(){
    return name;
}

int ToDo::getPriority(){
    return priority;
}

bool ToDo::getStatus(){
    return done;
}

void ToDo::setName(std::string newName){
    name = newName;
}

void ToDo::setPriority(int newPriority){
    priority = newPriority;
}

void ToDo::setStatus(bool status){
    done = status;
}

#endif
