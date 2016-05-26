#include <iostream>
#include <time.h>

#include "Account.h"
#include "Account.cpp"
using namespace std;
int main(){
    time_t nowtime;  
    nowtime = time(NULL); //获取日历时间  
   
   //实例化Account
    Account account(1122,20000,0.045);
    account.withDraw(2500);
    account.deposit(3000);
    cout<<"当前余额: " << account.getBalance()<<"\n"<< "月利率："<< account.getMonthlyInterestRate()<<"\n"<<"账户创建时间:"<<ctime(&nowtime)<<endl;
    return 0;
}