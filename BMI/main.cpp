//
//  main.cpp
//  BMI
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include "BMI.h"

int main(int argc, const char * argv[]) {
    
    std::string name;
    int height;
    double weight;
    
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your height (in inches): ";
    std::cin >> height;
    std::cout << "Enter your weight (in pounds): ";
    std::cin >> weight;
    
    BMI student1(name, height, weight);
    std::cout << "\n";
    std::cout << "Patient Name: " << student1.getName() << "\n";
    std::cout << "Height: " << student1.getHeight() << "\n";
    std::cout << "Weight: " << student1.getWeight() << "\n";
    std::cout << "BMI: " << student1.calculateBMI() << "\n";
    
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your height (in inches): ";
    std::cin >> height;
    std::cout << "Enter your weight (in pounds): ";
    std::cin >> weight;
    
    BMI student2;
    student2.setName(name);
    student2.setHeight(height);
    student2.setWeight(weight);
    
    std::cout << "\n";
    std::cout << "Patient Name: " << student2.getName() << "\n";
    std::cout << "Height: " << student2.getHeight() << "\n";
    std::cout << "Weight: " << student2.getWeight() << "\n";
    std::cout << "BMI: " << student2.calculateBMI() << "\n";
    
    std::cout << student1.getName() << "\n";
    
    return 0;
}
