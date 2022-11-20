#pragma once

#include <string>

namespace Zoo{

class Animal{
public:
    Animal();
    Animal(std::string name);

    void get_info();
    void move_to(int x, int y);
protected:
    std::string get_name();
private:
    std::string _name;
    int _x;
    int _y;
};

} // namespace Zoo