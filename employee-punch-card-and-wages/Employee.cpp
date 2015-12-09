//
//  Employee.cpp
//  challenge
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "Employee.hpp"

// constructor
employee::employee(string name, double pay)
{
    p_name = name;
    p_pay = pay;
}
// destructor
employee::~employee()
{
    
}
// member functions
string employee::displayName()
{
    return p_name;
}

void employee::timeIn(double clockInHour, double clockInMinute)
{
    p_clockInHour = clockInHour;
    p_clockInMinute = clockInMinute;
}
void employee::timeOut(double clockOutHour, double clockOutMinute)
{
    p_clockOutHour = clockOutHour;
    p_clockOutMinute = clockOutMinute;
}
void employee::hours()
{
    double tempHours = p_clockOutHour - p_clockInHour;
    double tempMinutes = p_clockOutMinute - p_clockInMinute;
    if (tempMinutes < 0)
    {
        tempHours--;
        tempMinutes = 60 + tempMinutes;
    }
    tempHours += (tempMinutes/60);
    p_hours = tempHours;
    p_weeklyHours += p_hours;
}
void employee::displayTotalHours()
{
    cout << "Total weekly hours for " << p_name << ": " << p_weeklyHours << endl;
}
void employee::weeklyPay()
{
    p_weeklyPay = p_pay * p_weeklyHours;
}
void employee::displayWeeklyPay()
{
    cout << "Total weekly pay for " << p_name << ": " << p_weeklyPay << endl;
}


