#include <iostream>
#include "MyPoint.h"
#include "MyPoint.cpp"
using namespace std;
int main(){
    MyPoint a;
    MyPoint b(10,30.5);
    cout<<a.distance(b)<<endl;
    return 0;
}