#include <iostream>

#include "MyPoint.h"
#include "MyPoint.cpp"

#include "ThreePoint.h"
#include "ThreePoint.cpp"
using namespace std;
int main(){
    MyPoint a;
    MyPoint b(10,30.5);
    ThreePoint c;
    ThreePoint d(10,30,25.5);
    cout<<"a,b两点间的距离："<< a.distance(b)<<endl;
    cout<<"c,d两点间的距离："<<c.distance(d)<<endl;
    return 0;
}
