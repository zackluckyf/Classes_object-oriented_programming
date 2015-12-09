//
//  Employee.hpp
//  challenge
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

class employee
{
public:
    // constructor
    employee(string name, double pay);
    // destructor
    ~employee();
    // member functions
    string displayName();
    void timeIn(double clockInHour, double clockInMinute);
    void timeOut(double clockOutHour, double clockOutMinute);
    void hours();
    void displayTotalHours();
    void weeklyPay();
    void displayWeeklyPay();
    
private:
    double p_clockInHour, p_clockInMinute, p_clockOutHour, p_clockOutMinute, p_hours, p_weeklyHours, p_pay, p_weeklyPay;
    string p_name;
    
    
    
    
    
};

#endif /* Employee_hpp */
