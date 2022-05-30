#include <iostream>

class Square
{
    float m_Side;
public:
    Square(float side) : m_Side(side) { }
};

class Circle
{
    float m_Radius;
public:
    Circle(float radius) : m_Radius(radius) { }
    float getRadius()
    {
        return m_Radius;
    }
};

class CircleInSquare : public Circle, public Square
{
public:
    CircleInSquare(float radius) : Square(radius * 2), Circle(radius) { }
};

int main(void)
{
    float a = 2;
    float r = 1;
    Square mySquare = Square(a);
    CircleInSquare myCircle = CircleInSquare(r);
    std::cout << myCircle.getRadius() << std::endl;
    std::cin.get();
    return 0;
}