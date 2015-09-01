//
//  GPA.h
//  GPA
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

#ifndef __GPA__GPA__
#define __GPA__GPA__

#include <stdio.h>

class GPA
{
public:
//Constructor
GPA();

//Overload Constructor
GPA(int, std::string);

//Destructor
~GPA();
    
//Accessor Functions
int getCredits() const;
    
std::string getGrade() const;
    
//Mutator Functions

    
private:
    
int newCredits;
    
std::string newGrade;

};

#endif /* defined(__GPA__GPA__) */
