#ifndef ThreePoint_H_H
#define ThreePoint_H_H
class ThreePoint:public MyPoint{
    public:
        ThreePoint();
        ThreePoint(double _x,double _y,double _z):
        MyPoint(_x,_y),z(_z){};
        double getZ();
        virtual double distance(ThreePoint);
    protected:
        double z;
};
#endif