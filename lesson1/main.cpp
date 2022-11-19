#include "SomeClass.h"

#include <iostream>

void func(){
    int smthng = 1;
}

int main(){
    MySpace::bar* instance = new MySpace::bar(122);
    instance->print();
    delete(instance); //C++ analogue to free()

    foo smthng;
    smthng.a = 10;

    std::cout << smthng.a << " blah " << 1 << std::endl;
    smthng.print();

    // using namespace MySpace; ->hack
    MySpace::bar this_is_class;
    this_is_class.set(42);
    this_is_class.print();

    MySpace::bar instance1;
    instance1.print();

    MySpace::bar lol(35);
    lol.print();

    func(42);
    func(42.56);

    return 0;
}