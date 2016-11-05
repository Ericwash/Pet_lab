#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Animal.h"
using namespace std;

class Dog : public Animal 
{
    public:

        void action();


        Dog();
        ~Dog();

    protected:

    private:
};

#endif // DOG_H
