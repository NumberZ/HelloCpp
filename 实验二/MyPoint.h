#ifndef MyPoint_H_H
#define MyPoint_H_H

class MyPoint{
    public:
        MyPoint();
        virtual ~MyPoint() = default;
        MyPoint(double _x,double _y)
        : x(_x), y(_y){};

        void setX(double x);
        void setY(double y);

        double getX();
        double getY();

        virtual double distance(MyPoint);
    protected:
        double x;
        double y;
};
#endif
