#include <iostream>
#include "Circle.h"
#include "Circle.cpp"
int main(){
    Circle  c1(10);
    Circle  c2(20);
    bool flag = c1 < c2;
    if(flag == 1){
        std::cout << "c1 比 c2 的半径小"<< std::endl;
    }else {
        std::cout <<"c1 不比 c2 的半径小" << std::endl;
    }

    return 0;
}
