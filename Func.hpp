#pragma once
#include <iostream>
#include <cmath>
#include <locale>

namespace Add
{
    struct Points // Создаём публичную структуру для координат
    {
        double x;
        double y;
    };

    class Priamoug
    {
    public:
        Priamoug(Points A, Points B, Points C, Points D); // Создаю прямоугольник

        ~Priamoug();

        double Square();
        double Perimeter();

    private:
        double Distance(Points P1, Points P2)
        {
            return sqrt((P2.x - P1.x) * (P2.x - P1.x) + (P2.y - P1.y) * (P2.y - P1.y));
        }
        double A1;
        double B1;
        double C1;
        double D1;
        
    };
}
