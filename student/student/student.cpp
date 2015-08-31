//
//  student.cpp
//  student
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include "student.h"

student::student(std::string name, char grade)
{
    newGrade = grade;
    newName = name;
}

student::student()
{
    newGrade = ' ';
}

student::~student()
{
    
}

std::string student::getName() const
{
    return newName;
}

char student::getGrade() const
{
    return newGrade;
}

void student::setName(std::string name)
{
    newName = name;
}

void student::setGrade(char grade)
{
    newGrade = grade;
}