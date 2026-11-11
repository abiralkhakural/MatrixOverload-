//
// Created by coola on 11/9/2026.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H


class Matrix {
private:
    int data[2][2];
    public:
    Matrix();
    Matrix(int a, int b, int c, int d);
    Matrix operator+(Matrix other);
    Matrix operator-(Matrix other);
    Matrix operator*(Matrix other);
    void print();
};


#endif //MATRIX_MATRIX_H
