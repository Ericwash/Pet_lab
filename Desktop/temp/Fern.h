#ifndef FERN_H
#define FERN_H
#include "Plant.h"
#include <iostream>
using namespace std;

class Fern : public Plant
{
    public:

        void action();

         Fern();
        ~Fern();

    protected:

    private:
};

#endif // FERN_H
