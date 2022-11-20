#include "Animal.h"

#include <iostream>

namespace Zoo{

Animal::Animal(){
    _x = 42;
    _y = 42;
}

Animal::Animal(std::string name) : Animal(){
    _name = name;
}

void Animal::get_info(){
    std::cout << _name << " at " << _x << ":" << _y << std::endl;
}

void Animal::move_to(int x, int y){
    std::cout << _name << " is moved to " << _x <<":" << _y << std::endl;
    _x = x;
    _y = y;
}
}