#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "./Shape.hpp"

class Triangle : public Shape
{
private:
public:
    ~Triangle() {}
    float getHeight();
    float getSemiPerimeter();
};

#endif // TRIANGLE_HPP