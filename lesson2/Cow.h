#pragma once

#include "Animal.h"

namespace Zoo{
    class Cow : public Animal
    {
    private:
        /* data */
    public:
        Cow();
        Cow(std::string name);

        void give_milk();
    };
} // namespace Zoo