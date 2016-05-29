#ifndef Circle_H_H
#define Circle_H_H

class Circle{
    public:
        Circle() = default;
        Circle(double _radius):
        radius(_radius){};
        virtual ~Circle() = default;
        double getRadius();
        void setRadius(double _radius);
        double getArea();
    private:
        double radius = 0;
};
#endif
