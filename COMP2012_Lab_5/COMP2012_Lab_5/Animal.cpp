#include "Animal.h"

Animal::Animal(string name)
{
    this->name = name;
}

void Animal::speak() const
{
    cout << "My name is " << name << "!";
}

Animal::~Animal()
{
    cout << "~Animal()" << endl;
}