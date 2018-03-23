//
//  Dog.hpp
//  COMP2012_Lab_5
//
//  Created by Chihim Ng on 23/3/2018.
//  Copyright © 2018 Chihim Ng. All rights reserved.
//

#ifndef Dog_hpp
#define Dog_hpp

#include "Animal.h"

class Dog : public Animal{
public:
    Dog(string name);
    virtual void speak() const override;
    virtual void eat(string food) override;
    void swim();
    virtual ~Dog() override;
};

#endif /* Dog_hpp */
