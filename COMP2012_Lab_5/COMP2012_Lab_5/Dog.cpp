//
//  Dog.cpp
//  COMP2012_Lab_5
//
//  Created by Chihim Ng on 23/3/2018.
//  Copyright © 2018 Chihim Ng. All rights reserved.
//

#include "Dog.h"

Dog::Dog(string name) : Animal(name) {
}

Dog::~Dog() {
    cout << "~Dog()" << endl;
}

void Dog::speak() const {
    this->Animal::speak();
    cout << " I am a Dog. Woof!" << endl;
}

void Dog::eat(string food) {
    cout << "The dog swings its tail furiously and eats " << food << "!" << endl;
}

void Dog::swim() {
    cout << "The dog swims freely!" << endl;
}
