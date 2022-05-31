#include <iostream>
#include <locale>
#include "Func.hpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    Add::Points A, B, C, D;
    std::cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
    
    Add::Priamoug Per(A,B,C,D);
    
    std::cout << std::endl << "Площадь = " << Per.Square() << std::endl;
    std::cout << "Периметр = " << Per.Perimeter() << std::endl;
    
    return 0;
}
