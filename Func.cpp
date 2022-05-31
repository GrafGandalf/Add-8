#include "Func.hpp"
#include <iostream>
#include <cmath>
#include <locale>



namespace Add
{
    Priamoug::Priamoug(Points A, Points B, Points C, Points D)
    {
        
        A1 = Distance(A, B);
        B1 = Distance(B, C);
        C1 = Distance(C, D);
        D1 = Distance(D, A);
        
        if (!(((A.x==B.x)&&(A.y==B.y))||((C.x==B.x)&&(C.y==B.y))||((C.x==D.x)&&(C.y==D.y))||((D.x==A.x)&&(D.y==A.y)))) //Проверка совпадения точек
        {
            if ((A1==C1)&&(B1==D1)) //Проверка прямоугольника (Равны ли попарно противоположные стороны)
            {
                std::cout << "Функция конструкта выполнена." << std::endl;
            }
            else
            {
                std::cout << "Фигура не является прямоугольником. Ошибка." << std::endl;
            }
        }
        else
        {
            std::cout << "Есть совпадающие точки. Ошибка." << std::endl;
        }
        std::cout << '\n' << "a = " << A1 << " b = " << B1 << " c = " << C1 << " d = " << D1 << '\n' << '\n';
    }

    Priamoug::~Priamoug()
    {
        
        std::cout << "Функция диструкции выполнена." << std::endl;
    }

    double Priamoug::Square()
    {
        return A1*B1;
    }
    double Priamoug::Perimeter()
    {
        return A1*2 + B1*2;
    }
}
