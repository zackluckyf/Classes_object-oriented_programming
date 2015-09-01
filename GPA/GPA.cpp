//
//  GPA.cpp
//  GPA
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include "GPA.h"

GPA::GPA()
{
    int credits = 0;
}

GPA::GPA(int credits, std::string grade)
{
    newCredits = credits;
    newGrade = grade;
}

//Accessor Functions
int GPA::getCredits() const
{
    return newCredits;
}

std::string GPA::getGrade() const
{
    return newGrade;
}

//Mutator Functions

GPA::~GPA()
{
    
}



