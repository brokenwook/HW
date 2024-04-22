#include <iostream>
#include <string>

int main()
{

    int a = 129956;
    int res = 0;

    while (a > 0) {
        res += a % 10;
        a = 10;
    }

    std::cout << res;


    return 0;
}

/*
int main() 
{
    int side1 = 34;
    int side2 = 17;
    int side3 = 98;

    if (triangleCh eck(side1, side2, side3)) 
    {
        std::cout << "Треугольник со сторонами " << side1 << ", " << side2 << " и " << side3 << " может существовать." << std::endl;
    }
    else 
    {
        std::cout << "Треугольник со сторонами " << side1 << ", " << side2 << " и " << side3 << " не может существовать." << std::endl;
    }

    return 0;
}

*/
