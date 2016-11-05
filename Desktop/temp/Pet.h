#ifndef PET_H
#define PET_H
#include <iostream>
using namespace std;

class Pet
{
    public:

        string name;
        int age;
	
	virtual void action() {} 

        Pet();
        ~Pet();

    protected:

    private:
};

#endif // PET_H
