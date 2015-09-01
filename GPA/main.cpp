//
//  main.cpp
//  GPA
//
//  Created by Zack Fanning on 8/30/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include "GPA.h"
#include <iomanip>
#include <vector>
#include <string>

void fillVector(std::vector<GPA>&);

void printVector(const std::vector<GPA>&);

void printGPA(std::vector<GPA>&);

int main(int argc, const char * argv[])
{
    std::vector<GPA> myGpa;
    
    fillVector(myGpa);
    //printVector(myGpa);
    printGPA(myGpa);
    
    return 0;
}

void fillVector(std::vector<GPA>& newClass)
{
    std::string grade;
    int classes;
    int credits;
    std::cout << "How many classes are you taking: ";
    std::cin >> classes;
    for (int i = 0; i < classes; i++)
    {
        std::cout << "Enter class #" << i + 1 << " credit hours: ";
        std::cin >> credits;
        std::cout << "Enter class #" << i + 1 << " grade: ";
        std::cin >> grade;
        GPA newStudent(credits, grade);
        newClass.push_back(newStudent);
        std::cout << "\n";
    }
}

void printVector(const std::vector<GPA>& newClass)
{
    unsigned int size = newClass.size();
    for (unsigned int i = 0; i < size; i++)
    {
        std::cout << "Class #" << i + 1 << " credit hours: " << newClass[i].getCredits() << "\n";
        std::cout << "Class #" << i + 1 << " grade: " << newClass[i].getGrade() << "\n" "\n";
    }
}

void printGPA(std::vector<GPA>& newClass)
{
    int total(0), credits(0);
    double gpa = 0.0, earnedCredits = 0.0, tempCredits = 0.0;
    
    unsigned int size = newClass.size();
    for (unsigned int i = 0; i < size; i++)
    {
        int temp = newClass[i].getCredits();
        total = total + temp;
    }
    std::vector<double> converter;
    size = newClass.size();
    for (unsigned int i = 0; i < size; i++)
    {
        std::string grade = newClass[i].getGrade();
        double converter = 0.0;
        if (grade == "A")
        {
            converter = 4.0;
        }
        else if (grade == "A-")
        {
            converter = 3.66;
        }
        else if (grade == "B+")
        {
            converter = 3.33;
        }
        else if (grade == "B")
        {
            converter = 3.0;
        }
        else if (grade == "B-")
        {
            converter = 2.66;
        }
        else if (grade == "C+")
        {
            converter = 2.33;
        }
        else if (grade == "C")
        {
            converter = 2.0;
        }
        else if (grade == "C-")
        {
            converter = 1.66;
        }
        else if (grade == "D+")
        {
            converter = 1.33;
        }
        else if (grade == "D")
        {
            converter = 1.0;
        }
        else if (grade == "D-")
        {
            converter = .66;
        }
        else
        {
            converter = 0.0;
        }

        credits = newClass[i].getCredits();
        tempCredits = credits * converter;
        earnedCredits = tempCredits + earnedCredits;

    }
    
    for (unsigned int i = 0; i < size; i++)
    {
        gpa = earnedCredits / total;
    }
    
    std::cout << "Your GPA is: " << std::fixed << std::setprecision(2) << gpa;
    
}





