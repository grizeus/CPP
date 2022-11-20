#include "Cow.h"

#include <iostream>

namespace Zoo{
Cow::Cow()
{}

Cow::Cow(std::string name) : Animal(name){

}

void Cow::give_milk(){
    std::cout << get_name() << ": here is some milk!" << std::endl;
}

std::string Animal::get_name(){
    return _name;
}
} // namespace Zoo