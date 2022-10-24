#include <iostream>

#include "./include/Square.hpp"
#include "./include/Circle.hpp"
#include "./include/Triangles.hpp"

int main()
{
    /* The "Shape" interface gives us the following protocol: 
     *   - getArea: float
     *   - getPerimeter: float
     */
    Shape* circle = new Circle(5.3);
    Shape* square = new Square(7.3);
    Shape* isoscelesTriangle = new IsoscelesTriangle(2.2, 3.2);
    Shape* scaleneTriangle = new ScaleneTriangle(2.2 , 3.3, 4.4);
    Shape* equilateralTriangle = new EquilateralTriangle(2.3);

    std::cout << "circle area(radius = 5.3): " << circle->getArea() << std::endl;
    std::cout << "square area(side = 7.3): " << square->getArea() << std::endl;
    std::cout << "isosceles triangle area(base = 2.2, sides = 3.2): " << isoscelesTriangle->getArea() << std::endl;
    std::cout << "scalene triangle area(base = 2.2, sideB = 3.3, sideC = 4.4): " << scaleneTriangle->getArea() << std::endl;
    std::cout << "equilateral triangle area(side = 2.2): " << equilateralTriangle->getArea() << std::endl;

    delete circle;
    delete square;
    delete isoscelesTriangle;
    delete scaleneTriangle;
    delete equilateralTriangle;

    return 0;
}