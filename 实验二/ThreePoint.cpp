#include "ThreePoint.h"
#include <math.h>
ThreePoint::ThreePoint(){
    x = 0;
    y = 0;
    z = 0;
}
double ThreePoint::getZ(){
    return z;
}
double ThreePoint::distance(ThreePoint threePoint){
    double x1 = x,y1 = y,z1 =z;
    double x2 = threePoint.getX(), y2 = threePoint.getY(), z2 = threePoint.getZ(); 
    return sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2) + (z1-z2) * (z1-z2));
}