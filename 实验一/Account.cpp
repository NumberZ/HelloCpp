#include "Account.h"

Account::Account(){
    id = 0;
    balance = 0;
    annualInterestRate = 0;
}

int Account::getId(){
    return id;
}

double Account::getBalance(){
    return balance;
}

double Account::getAnnualInterestRate(){
    return annualInterestRate;
}
double Account::getMonthlyInterestRate(){
    return annualInterestRate / 12;
}
void Account::setId(int id){
    this->id = id;
}

void Account::setBalance(double balance){
    this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate){
    this->annualInterestRate = annualInterestRate;
}

void Account::withDraw(double money){
    if(balance - money >= 0){
        balance = balance - money;
    }else {
        throw "余额不足！";
    }
}

void Account::deposit(double money){
    balance = balance + money;
}

