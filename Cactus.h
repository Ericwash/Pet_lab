#ifndef CACTUS_H
#define CACTUS_H
#include <iostream>
#include "Plant.h"
using namespace std;

class Cactus : public Plant
{
    public:

        void poke();

        Cactus();
        ~Cactus();

    protected:

    private:
};

#endif // CACTUS_H
