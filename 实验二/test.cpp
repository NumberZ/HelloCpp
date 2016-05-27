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
    cout<<a.distance(b)<<endl;
    cout<<c.distance(d)<<endl;
    return 0;
}