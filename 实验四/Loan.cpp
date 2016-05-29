#include "Loan.h"

Loan::Loan(){
    annualInterestRate = 0;
    numbersOfYears = 0;
    loanAmount = 0;
}

double Loan::getAnnualInterestRate(){
    return annualInterestRate;
}

int Loan::getNumbersOfYears(){
    return numbersOfYears;
}

double Loan::getLoanAmount(){
    return loanAmount;
}

void Loan::setAnnualInterestRate(double _annualInterestRate){
    annualInterestRate = _annualInterestRate;
}

void Loan::setNumbersOfYears(int _numbersOfYears){
    numbersOfYears = _numbersOfYears;
}

void Loan::setLoanAmount(double _loanAmount){
    loanAmount = _loanAmount;
}

double Loan::getMonthlyPayment(){
    return 0.1;
}

double getTotalPayment(){
    return 0.2;
}
