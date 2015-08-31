//
//  student.h
//  student
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#ifndef __student__student__
#define __student__student__

#include <stdio.h>
#include <iostream>
#include <string>

class student
{
public:
    //constructor
    student();
    
    //overload constructor
    student(std::string, char);
    
    //destructor
    ~student();
    
    //accessor functions
    std::string getName() const;
    
    char getGrade() const;
    
    //mutator functions
    void setName(std::string);
    
    void setGrade(char);
    
private:
    std::string newName;
    char newGrade;
    
};


#endif /* defined(__student__student__) */
