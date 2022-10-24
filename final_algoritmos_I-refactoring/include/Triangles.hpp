#ifndef TRIANGLES_HPP
#define TRIANGLES_HPP 

#include "./Triangle.hpp"

class EquilateralTriangle : public Triangle
{
private:
    float side;
    
    float getHeight();
    float getSemiperimeter();
public:
    EquilateralTriangle(float _side);
    ~EquilateralTriangle();
    float getArea();
    float getPerimeter();
    void setSide(float _side);
};

class IsoscelesTriangle : public Triangle
{
private:
    float base; /* A */
    float sideAB; /* B & C -> [B = C] */
    
    float getHeight();
    float getSemiperimeter();
public:
    IsoscelesTriangle(float _base, float _sides);
    ~IsoscelesTriangle();
    float getArea();
    float getPerimeter();
    void setBase(float _base);
    void setSides(float _sides);
};

class ScaleneTriangle : public Triangle
{
private:
    float base;
    float sideB;
    float sideC;

    float getHeight();
    float getSemiperimeter();
public:
    ScaleneTriangle(float _base, float _sideB, float _sideC);
    ~ScaleneTriangle();
    float getArea();
    float getPerimeter();
    void setBase(float _base);
    void setSides(float _sideB, float _sideC);
};

#endif // TRIANGLES_HPP