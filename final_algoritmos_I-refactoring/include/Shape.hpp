#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
    public:
        virtual ~Shape() {}
        virtual float getPerimeter() = 0;
        virtual float getArea() = 0;
};
#endif //SHAPE_HPP