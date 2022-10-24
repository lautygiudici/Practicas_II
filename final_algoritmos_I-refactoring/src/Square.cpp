#include "../include/Square.hpp"

Square::Square(float _side)
{
    side = _side;
}
Square::~Square()
{
}

float Square::getPerimeter()
{
    return 4 * side;
};

float Square::getArea()
{
    return side * side;
};