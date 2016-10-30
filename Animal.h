#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include "Pet.h"
using namespace std;

class Animal : public Pet
{
    public:

        char gender;
        bool indoor_outdoor;

        Animal();
        ~Animal();

    protected:

    private:
};

#endif // ANIMAL_H
