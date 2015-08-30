//
//  BMI.h
//  BMI
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>

#ifndef __BMI__BMI__
#define __BMI__BMI__

#include <stdio.h>

class BMI
{
public:
    //Default Constructors
    BMI();
    
    //Overload Constructor
    BMI(std::string, int, double);
    
    //Destructor
    ~BMI();
    
    //Accessor Functions
    std::string getName() const;
    //Returns name of patient
    
    int getHeight() const;
    //Returns patient height
    
    double getWeight() const;
    //Returns patient weight;
    
    //Mutator Functions
    void setName(std::string);
    //Sets the name
    
    void setHeight(int);
    //Sets the height
    
    void setWeight(double);
    //Sets the weight
    
    double calculateBMI() const;
    //Calculates BMI
    
    
private:
    //Member Variables
    std::string newName;
    int newHeight;
    double newWeight;
};


#endif /* defined(__BMI__BMI__) */
