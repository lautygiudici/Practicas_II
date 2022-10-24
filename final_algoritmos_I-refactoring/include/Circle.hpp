#ifndef CIRCLE_H
#define CIRCLE_H

#include "./Shape.hpp"

class Circle : public Shape
{
private:
    float radius;
public:
    
    Circle(float _radius);
    ~Circle();
    float getPerimeter();
    float getArea();
};
#endif // CIRCLE_HPP