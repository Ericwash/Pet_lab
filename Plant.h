#ifndef PLANT_H
#define PLANT_H
#include <iostream>
#include "Pet.h"
using namespace std;

class Plant : public Pet
{
    public:

        int Green_ness;


        Plant();
        ~Plant();

    protected:

    private:
};

#endif // PLANT_H
