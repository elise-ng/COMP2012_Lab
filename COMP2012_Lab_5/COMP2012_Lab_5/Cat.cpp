//
//  Cat.cpp
//  COMP2012_Lab_5
//
//  Created by Chihim Ng on 23/3/2018.
//  Copyright © 2018 Chihim Ng. All rights reserved.
//

#include "Cat.h"
Cat::Cat(string name) : Animal(name) {
}

Cat::~Cat() {
    cout << "~Cat()" << endl ;
}

void Cat::speak() const {
    this->Animal::speak();
    cout << " I am a Cat. Meow!" << endl;
}

void Cat::eat(string food) {
    cout << "The cat meows happily and eats " << food << "!" << endl;
}
