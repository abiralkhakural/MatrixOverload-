#include "Matrix.h"
#include <iostream>

Matrix::Matrix() {
    for (int i = 0; i<2; i++) {
        for (int j =0; j<2; j++) {
            data[i][j] = 0;
        }
    }
}

Matrix::Matrix(int a, int b, int c, int d) {
    data[0][0] = a;
    data[0][1] = b;
    data[1][0] = c;
    data[1][1] = d;
}

Matrix Matrix::operator+(Matrix other) {
    Matrix result;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator-(Matrix other) {
    Matrix result;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(Matrix other) {
    Matrix result;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            result.data[i][j] += data[i][j] * other.data[i][j];
        }
    }
    return result;
}

void Matrix::print() {
    for (int i=0; i<2; i++) {
        std::cout<<data[i][0]<<std::endl;
        std::cout<<data[i][1]<<std::endl;
    }
}