#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Shape.hpp"

class Square : public Shape
{
    private:
        float side;
    public:
        Square(float _side);
        ~Square();
        float getPerimeter();
        float getArea();
};


#endif // SQUARE_HPP