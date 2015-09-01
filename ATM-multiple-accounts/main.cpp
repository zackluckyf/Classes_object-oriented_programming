//
//  main.cpp
//  ATM-multiple-accounts
//
//  Created by Zack Fanning on 9/1/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>
#include "bank.h"

int main(int argc, const char * argv[])
{
    bank::printBankInfo();
    std::cout << "Adam created an account with $500\n";
    //Adam's account opened
    bank Adam("Adam", 1, 500);
    
    //Sarah's account opened
    bank Sarah;
    
    //Sarah's account setup
    Sarah.setName("Sarah");
    Sarah.setAccountNumber(2);
    Sarah.setBalance(1000);
    
    
    std::cout << "Sarah created an account with $1000\n";
    bank::printBankInfo();
    
    //Dick's account opened
    bank Dick("Dick", 3, 1500);
    
    std::cout << "Dick created an account with $1500\n";
    
    bank::printBankInfo();
    
    Sarah.withdraw(200);
    std::cout << "Sarah withdrew $200\n";
    
    bank::printBankInfo();
    
    Dick.setBalance(1200);
    std::cout << "Dick set his account balance to $1200\n";
    
    bank::printBankInfo();
    
    Dick.deposit(100);
    std::cout << "Dick deposited $100\n";
    
    bank::printBankInfo();
    
    Adam.~bank();
    std::cout << "Adam's account was closed due to lack of activity\n";
    
    bank::printBankInfo();
    
    return 0;
}
