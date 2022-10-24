#include "../include/Circle.hpp"

Circle::Circle(float _radius)
{
    radius = _radius;
}

Circle::~Circle(){}

float Circle::getPerimeter()
{
    return 2 * 3.14 * radius;
};

float Circle::getArea()
{
    return 3.14 * (radius * radius);
};