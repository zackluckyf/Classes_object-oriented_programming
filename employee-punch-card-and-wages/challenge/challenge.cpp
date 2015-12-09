//
//  main.cpp
//  challenge
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    string tempName;
    double tempPay;
    int i = 1;
  
    // Company with 3 employees
    
    cout << "Name of employee " << i << ": ";
    cin >> tempName;
    cout << "Pay rate: ";
    cin >> tempPay;
    employee jake(tempName, tempPay);
    i++;
    
    cout << "Name of employee " << i << ": ";
    cin >> tempName;
    cout << "Pay rate: ";
    cin >> tempPay;
    employee john(tempName, tempPay);
    i++;
    
    cout << "Name of employee " << i << ": ";
    cin >> tempName;
    cout << "Pay rate: ";
    cin >> tempPay;
    employee jimmy(tempName, tempPay);
    i++;
    
    // to add more employees copy/paste and change the object name to the employee name
    
    /*
    cout << "Name of employee " << i << ": ";
    cin >> tempName;
    cout << "Pay rate: ";
    cin >> tempPay;
    employee NewEmployeeName(tempName, tempPay);
    i++;
    */
    
    // and add them to the vector below
    
    vector<employee> employees;
    employees.push_back(jake);
    employees.push_back(john);
    employees.push_back(jimmy);
    
    //employees.push_back(NewEmployeeName);
    
    int days(0);
    cout << "Days worked this week: ";
    cin >> days;
    double clockInHour, clockInMinute, clockOutHour, clockOutMinute;
    for (int k = 0; k < days; k++)
    {
        cout << "For day " << k+1 << endl;
        for (int j = 0; j < employees.size(); j++)
        {
            cout << "Enter clock in Hour(0-23) for " << employees[j].displayName() << ": ";
            cin >> clockInHour;
            cout << "Enter clock in Minute(0-59) for " << employees[j].displayName() << ": ";
            cin >> clockInMinute;
            cout << "Enter clock out Hour(0-23) for " << employees[j].displayName() << ": ";
            cin >> clockOutHour;
            cout << "Enter clock out Minute(0-59) for " << employees[j].displayName() << ": ";
            cin >> clockOutMinute;
            employees[j].timeIn(clockInHour, clockInMinute);
            employees[j].timeOut(clockOutHour, clockOutMinute);
            employees[j].hours();
        }
    }
    
    for (int j = 0; j < employees.size(); j++)
    {
        employees[j].displayTotalHours();
        employees[j].weeklyPay();
        employees[j].displayWeeklyPay();
    }
    
    return 0;
}
