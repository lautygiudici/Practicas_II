#include "../include/Triangles.hpp"

#include <math.h>

EquilateralTriangle::EquilateralTriangle(float _side)
{ 
    setSide(_side);
}
EquilateralTriangle::~EquilateralTriangle()
{

}
void EquilateralTriangle::setSide(float _side)
{
    this->side = _side;
}
float EquilateralTriangle::getArea() 
{
    return ((this->side * getHeight() ) / 2);
}
float EquilateralTriangle::getPerimeter() 
{
    return ( this->side * 3);
}

float EquilateralTriangle::getHeight()
{
    float s = getSemiperimeter();
    return ((2 / side) * (sqrt( s * ((s - side) * (s - side) * (s - side)))));
}
float EquilateralTriangle::getSemiperimeter()
{
    return (getPerimeter() / 2);
}
ScaleneTriangle::ScaleneTriangle(float _base, float _sideB, float _sideC)
{ 
    setBase(_base);
    setSides(_sideB, _sideC);
}
ScaleneTriangle::~ScaleneTriangle()
{

}
void ScaleneTriangle::setBase(float _base)
{
    this->base = _base;
}
void ScaleneTriangle::setSides(float _sideB, float _sideC)
{
    this->sideB = _sideB;
    this->sideC = _sideC;
}
float ScaleneTriangle::getArea() 
{
    return ((base * getHeight()) / 2);
}
float ScaleneTriangle::getPerimeter() 
{
    return (base + sideB + sideC);
}
float ScaleneTriangle::getHeight()
{
    float s = this->getSemiperimeter();
    return ((2 / base) * (sqrt(s * ((s - base) * (s - sideB) * (s - sideC)))));
}
float ScaleneTriangle::getSemiperimeter()
{
    return (getPerimeter() / 2);
}

IsoscelesTriangle::IsoscelesTriangle(float _base, float _sides)
{
    setBase(_base);
    setSides(_sides);
}
IsoscelesTriangle::~IsoscelesTriangle()
{

}
void IsoscelesTriangle::setBase(float _base)
{
    this->base = _base;
}
void IsoscelesTriangle::setSides(float _sideAB)
{
    this->sideAB = _sideAB;
}
float IsoscelesTriangle::getArea()
{
    return ((base * getHeight()) / 2);
}
float IsoscelesTriangle::getHeight()
{
    float s = this->getSemiperimeter();
    return ((2 / base) * (sqrt(s * ((s - base) * (s - sideAB) * (s - sideAB)))));
}
float IsoscelesTriangle::getSemiperimeter()
{
    return (getPerimeter() / 2);
}
float IsoscelesTriangle::getPerimeter()
{
    return (base + sideAB + sideAB);
}