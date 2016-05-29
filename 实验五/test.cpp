#include <iostream>
#include "Circle.h"
#include "Circle.cpp"
int main(){
    Circle  c1(10);
    Circle  c2(20);
    bool flag = c1 < c2;
    std::cout << flag << std::endl;
    return 0;
}
