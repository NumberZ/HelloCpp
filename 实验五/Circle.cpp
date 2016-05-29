#include "Circle.h"

double Circle::getRadius(){
    return radius;
}

void Circle::setRadius(double _radius){
    radius = _radius;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}
bool operator<(Circle c1,Circle c2){
    return (c1.getRadius() < c2.getRadius());
}

bool operator==(Circle c1,Circle c2){
    return (c1.getRadius() == c2.getRadius());
}

bool operator<=(Circle c1,Circle c2){
    return (c1 < c2 || c1 == c2);
}

bool operator!=(Circle c1,Circle c2){
    return !(c1 == c2);
}

bool operator>(Circle c1,Circle c2){
    return (c1.getRadius() > c2.getRadius());
}

bool operator>=(Circle c1,Circle c2){
    return (c1 > c2 || c1 == c2);
}
