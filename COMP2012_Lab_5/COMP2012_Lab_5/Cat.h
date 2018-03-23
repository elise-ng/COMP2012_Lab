//
//  Cat.hpp
//  COMP2012_Lab_5
//
//  Created by Chihim Ng on 23/3/2018.
//  Copyright © 2018 Chihim Ng. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include "Animal.h"
class Cat : public Animal {
public:
    Cat(string name);
    virtual void speak() const override;
    virtual void eat(string food) override;
    virtual ~Cat() override;
};

#endif /* Cat_hpp */
