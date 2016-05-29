#include <iostream>
#include <fstream>
#include <stdlib.h>

#include "Loan.h"
#include "Loan.cpp"
using namespace std;

int main(){
    Loan loan_one;
    loan_one.setLoanAmount(100);
    Loan loan_two;
    loan_two.setLoanAmount(200);
    Loan loan_three;
    loan_three.setLoanAmount(300);
    Loan loan_four;
    loan_four.setLoanAmount(400);
    Loan loan_five;
    loan_five.setLoanAmount(500);

    fstream binaryio;
    binaryio.open("Exercise12_6.dat",ios::out | ios::binary);
    binaryio.write(reinterpret_cast<char *>(&loan_one),sizeof(Loan));
    binaryio.write(reinterpret_cast<char *>(&loan_two),sizeof(Loan));
    binaryio.write(reinterpret_cast<char *>(&loan_three),sizeof(Loan));
    binaryio.write(reinterpret_cast<char *>(&loan_four),sizeof(Loan));
    binaryio.write(reinterpret_cast<char *>(&loan_five),sizeof(Loan));
    binaryio.close();

    Loan newLoan;
    double allLoan = 0;
    double lastLoan = 0;
    binaryio.open("Exercise12_6.dat",ios::in | ios::binary);

    while(!binaryio.eof()){
        binaryio.read(reinterpret_cast<char *> (&newLoan),sizeof(Loan));
        allLoan = allLoan + newLoan.getLoanAmount();
        lastLoan = newLoan.getLoanAmount();
    }
    binaryio.close();
    std::cout << allLoan - lastLoan << std::endl;
    return 0;
}
