#ifndef SNAKE_H
#define SNAKE_H
#include <iostream>
#include "Animal.h"
using namespace std;

class Snake : public Animal
{
    public:

        void action();

        Snake();
        ~Snake();

    protected:

    private:
};

#endif // SNAKE_H
