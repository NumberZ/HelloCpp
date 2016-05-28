#include <iostream>
#include "StackOfIntegers.h"
#include "StackOfIntegers.cpp"


/**
 * [isSuShu 判断是否为素数]
 * @param  n
 */
bool isSuShu(int n){
    bool flag = true;
    for(int i = 2; i<n; i++){
        if(n%i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    int value = 120,i;
    StackOfIntegers s;
    while (value!=1) {
        for(i =2 ;i<=value; i++){
            if(value%i == 0 && isSuShu(i)){
                break;
            }
        }
        s.push(i);
        value = value / i;
    }
    std::cout << s.pop()<< std::endl;
    std::cout << s.peek()<< std::endl;

    return 0;
}
