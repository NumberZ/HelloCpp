#include "MyPoint.h"
#include <math.h>
MyPoint::MyPoint(){
    x = 0;
    y = 0;
}
void MyPoint::setX(double x){
    this->x = x;
}
void MyPoint::setY(double y){
    this->y = y;
}
double MyPoint::getX(){
    return x;
}
double MyPoint::getY(){
    return y;
}
double MyPoint::distance(MyPoint anotherPoint){
       return sqrt((x-anotherPoint.getX())*(x-anotherPoint.getX())+(y-anotherPoint.getY())*(y-anotherPoint.getY()));
}
