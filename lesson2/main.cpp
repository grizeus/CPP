#include "Animal.h"
#include "Cow.h"

#include <iostream>

int main(void){
    Zoo::Animal some_animal("Unknown animal");
    some_animal.get_info();

    Zoo::Cow Martha("Martha");
    Martha.get_info();
    Martha.give_milk();
}