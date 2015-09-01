//
//  bank.h
//  ATM-multiple-accounts
//
//  Created by Zack Fanning on 9/1/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#ifndef __ATM_multiple_accounts__bank__
#define __ATM_multiple_accounts__bank__

#include <iostream>
#include <stdio.h>
#include <string>

class bank
{
public:
    //Default constructor
    bank();
    
    //Overload constructor
    
    bank(std::string, int, double);
    
    //Destructor
    ~bank();
    
    //Accessors
    std::string getName();
    
    int getAccountNumber();
    
    double getBalance();
    
    //Mutators
    
    void setName(std::string);
    
    void setAccountNumber(int);
    
    void setBalance(double);
    
    void withdraw(double);
    
    void deposit(double);
    
    static void printBankInfo();
    
private:
    //member variables
    std::string name;
    int accountNumber;
    double balance;
    
    static int totalAccounts;
    static double bankBalance;
};

#endif /* defined(__ATM_multiple_accounts__bank__) */
