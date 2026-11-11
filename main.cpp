#include <iostream>
#include "Matrix.h"

int main() {
    Matrix first(3, 6, 4 ,8);
    Matrix second(1, 7, 2 ,5);
    Matrix sumMatrix = first + second;
    Matrix differenceMatrix = first - second;
    Matrix productMatrix = first * second;

    std::cout<<"first matrix"<<std::endl;
    first.print();
    std::cout<<"second matrix"<<std::endl;
    second.print();
    std::cout<<"sum of two matrises"<<std::endl;
    sumMatrix.print();
    std::cout<<"difference between the matrises"<<std::endl;
    differenceMatrix.print();
    std::cout<<"product of two matrises"<<std::endl;
    productMatrix.print();
    return 0;
}