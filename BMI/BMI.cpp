//
//  BMI.cpp
//  BMI
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include "BMI.h"

BMI::BMI()
{
    newHeight = 0;
    newWeight = 0.0;
}

BMI::BMI(std::string name, int height, double weight)
{
    newName = name;
    newHeight = height;
    newWeight = weight;
}

BMI::~BMI()
{
    
}

//Accessor Functions
std::string BMI::getName() const
{
    return newName;
}

int BMI::getHeight() const
{
    return newHeight;
}
double BMI::getWeight() const
{
    return newWeight;
}

//Mutator Functions
void BMI::setName(std::string name)
{
    newName = name;
}

void BMI::setHeight(int height)
{
    newHeight = height;
}

void BMI::setWeight(double weight)
{
    newWeight = weight;
}

double BMI::calculateBMI() const
{
    return (newWeight * 703 / (newHeight * newHeight));
}




