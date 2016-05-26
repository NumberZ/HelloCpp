#ifndef ACCOUNT_H_H
#define ACCOUNT_H_H

class Account
{
    public:
        Account(); //构造函数
        Account(int _id,int _balance,double _annualInterestRate) //有参构造函数
        : id(_id), balance(_balance), annualInterestRate(_annualInterestRate){};
        double  getMonthlyInterestRate();
        void    withDraw(double money);
        void    deposit(double money);

        void    setId(int id);
        void    setBalance(double balance);
        void    setAnnualInterestRate(double annualInterestRate);

        int     getId();
        double  getBalance();
        double  getAnnualInterestRate();

    private:
        int id;
        double balance;
        double annualInterestRate;
};
#endif