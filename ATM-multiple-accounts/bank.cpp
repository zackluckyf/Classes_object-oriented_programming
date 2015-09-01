//
//  bank.cpp
//  ATM-multiple-accounts
//
//  Created by Zack Fanning on 9/1/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//


#include "bank.h"

//Static Member Variables
int bank::totalAccounts = 0;
double bank::bankBalance = 10000;

bank::bank()
{
    accountNumber = 0;
    balance = 0.0;
    totalAccounts++;
}

bank::bank(std::string newName, int newAccountNumber, double newBalance)
{
    name = newName;
    accountNumber = newAccountNumber;
    balance = newBalance;
    totalAccounts++;
    bankBalance += newBalance;
}

bank::~bank()
{
    totalAccounts--;
    bankBalance -= balance;
}

void bank::setName(std::string newName)
{
    name = newName;
}

void bank::setAccountNumber(int newAccountNumber)
{
    accountNumber = newAccountNumber;
}

void bank::setBalance(double newBalance)
{
    bankBalance -= balance;
    balance = newBalance;
    bankBalance += newBalance;
}


void bank::withdraw(double withdraw)
{
    balance -= withdraw;
    bankBalance -= withdraw;
}

void bank::deposit(double deposit)
{
    balance += deposit;
    bankBalance += deposit;
}

void bank::printBankInfo()
{
    std::cout << "\n" << "Number of accounts: " << totalAccounts << "\n";
    std::cout << "Total Balance: " << bankBalance << "\n\n";
}










