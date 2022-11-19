#pragma once
#include <iostream>

struct foo
{
    int a;
    void print(){
        std::cout << a << std::endl;
    }
};

namespace MySpace{
    class bar{
    private:
        int a;

    public:
        // Defailt constructor
        bar(){
            std::cout << "Default constructor called" << std::endl;
            a = 12;
        }
        bar(int _a){
            std::cout << "Overloaded constructor called" << std::endl;
            a = _a;
        }

        ~bar(){
            std::cout << "Bar with " << a << " is destroyer" << std::endl;
        }
        void set(int _a){
            a = _a;
        }
        void print(){
            std::cout << a << std::endl;
        }
    };
}

void func(int a){
    std::cout << "This function takes int as arg " << a << std::endl;
}

void func(double a){
    std::cout << "This function takes int as arg " << a << std::endl;
}

namespace{ // Ananymous namespace
    void func2(){

    }
}