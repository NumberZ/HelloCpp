#include <iostream>
#include "Account.h"
#include "Account.cpp"
using namespace std;
int main(){
    Account account(1122,20000,0.045);
    account.withDraw(2500);
    account.deposit(3000);
    cout<<account.getBalance()<<endl;
    cout<<account.getMonthlyInterestRate()<<endl;
    cout<<account.getId()<<endl;
 
    return 0;
}