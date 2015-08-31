//
//  main.cpp
//  student
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "student.h"

void fillVector(std::vector<student>&);
//fill in student information

void printVector(const std::vector<student>&);
//print all students information

int main(int argc, const char * argv[])
{
    std::vector <student> myClass;
    
    fillVector(myClass);
    printVector(myClass);
    
    return 0;
}

void fillVector(std::vector<student>& newMyClass)
{
    std::string name;
    char grade;
    std::cout << "How many students are in your class: ";
    int size;
    std::cin >> size;
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter Student Name: ";
        std::cin >> name;
        std::cout << "Enter Student Grade: ";
        std::cin >> grade;
        student newStudent(name, grade);
        newMyClass.push_back(newStudent);
        std::cout << "\n";
    }
}

void printVector(const std::vector<student>& newMyClass)
{
    unsigned int size = newMyClass.size();
    for (unsigned int i = 0; i < size; i++)
    {
        std::cout << "Student name: " << newMyClass[i].getName() << "\n";
        std::cout << "Student grade: " << newMyClass[i].getGrade() << "\n" << "\n";
    }
    
}












