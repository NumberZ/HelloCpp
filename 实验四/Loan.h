#ifndef  Loan_H_H
#define Loan_H_H

class Loan{
    public:
        Loan();
        Loan(double _annualInterestRate,int _numbersOfYears,double _loanAmount)
        :annualInterestRate(_annualInterestRate),numbersOfYears(_numbersOfYears),loanAmount(_loanAmount){};
        virtual ~Loan() = default;
        double getAnnualInterestRate();
        int getNumbersOfYears();
        double getLoanAmount();

        void setAnnualInterestRate(double _annualInterestRate);
        void setNumbersOfYears(int _numbersOfYears);
        void setLoanAmount(double _loanAmount);

        double getMonthlyPayment();
        double getTotalPayment();
    private:
        double annualInterestRate;
        int numbersOfYears;
        double loanAmount;

};
#endif
