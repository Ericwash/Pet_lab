#include <iostream>
#include "Pet.h"
#include "Snake.h"
#include "Dog.h"
#include "Cat.h"
#include "Animal.h"
#include "Plant.h"
#include "Fern.h"
#include "Cactus.h"
using namespace std;

int main()
{


    Pet myPet;
    Snake mySnake;
    myPet.name = "Archimedes";

    Snake *snakePointer;
    snakePointer = &mySnake;

    snakePointer -> action();



    return 0;
}
