#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;


int main(int argc, const char* argv[]) {

    setlocale(LC_ALL, "Russian");

    double r[3] = { 3,4,5 };
    double x[3] = { 3,4,5 };
    double y[3] = { 3,4,5 };

    Triangle triangle1(r);
    Triangle triangle2(x, y);

    cout << "Треугольник со сторонами: " << triangle1.r[0] << " " << triangle1.r[1] << " " << triangle1.r[2] << endl;
    cout << "S = " << triangle1.P() << endl;
    cout << "P = " << triangle1.S() << endl;

    cout << "Треугольник с координатами вершин: " <<
        "x1 = " << triangle2.x[0] << "; y1 = " << triangle2.y[0] <<
        "; x2 = " << triangle2.x[1] << "; y2 = " << triangle2.y[1] <<
        "; x3 = " << triangle2.x[2] << "; y3 = " << triangle2.y[2] << endl;
    cout << "S = " << triangle2.Pxy() << endl;
    cout << "P = " << triangle2.Sxy() << endl;




    double r1[2] = { 3,4 };
    double x1[3] = { 3,4,5 };
    double y1[3] = { 3,4,5 };

    Rectangle rectangle1(r1);
    Rectangle rectangle2(x1, y1);

    cout << "\nПрямоугольник со сторонами: " << rectangle1.r[0] << " " << rectangle1.r[1] << endl;
    cout << "S = " << rectangle1.P() << endl;
    cout << "P = " << rectangle1.S() << endl;

    cout << "Прямоугольник с координатами вершин: " <<
        "x1 = " << rectangle2.x[0] << "; y1 = " << rectangle2.y[0] <<
        "; x2 = " << rectangle2.x[1] << "; y2 = " << rectangle2.y[1] << endl;
    cout << "S = " << rectangle2.Pxy() << endl;
    cout << "P = " << rectangle2.Sxy() << endl;


    double r2[2] = { 6,7 };
    double x2[3] = { 3,4,5 };
    double y2[3] = { 3,4,5 };
    double a = 30;

    Parallelogram parallelogram1(r2, a);
    Parallelogram parallelogram2(x2, y2);

    cout << "\nПараллелограм со сторонами: " << parallelogram1.r[0] << " " << parallelogram1.r[1] << endl;
    cout << "S = " << parallelogram1.P() << endl;
    cout << "P = " << parallelogram1.S() << endl;

    cout << "Параллелограмм с координатами вершин: " <<
        "x1 = " << parallelogram2.x[0] << "; y1 = " << parallelogram2.y[0] <<
        "; x2 = " << parallelogram2.x[1] << "; y2 = " << parallelogram2.y[1] << endl;
    cout << "S = " << parallelogram2.Pxy() << endl;
    cout << "P = " << parallelogram2.Sxy() << endl;



    double r3 = 4;
    double x3[2] = { 3,4 };
    double y3[2] = { 3,4 };


    Сircle circle1(r3);
    Сircle circle2(x3, y3);

    cout << "\nКруг со радиусом: " << circle1.r << endl;
    cout << "S = " << circle1.P() << endl;
    cout << "P = " << circle1.S() << endl;

    cout << "Круг с центром в точке: " <<
        "x1 = " << circle2.x[0] << "; y1 = " << circle2.y[0] <<
        "; и точка x2 = " << circle2.x[1] << "; y2 = " << circle2.y[1] << "принадлежит окружности" << endl;
    cout << "S = " << circle2.Pxy() << endl;
    cout << "P = " << circle2.Sxy() << endl;



    double r4[4] = { 3,4,5,6 };
    double x4[4] = { 3,4,5,6 };
    double y4[4] = { 3,4,5,6 };


    Trapezoid trapezoid1(r4);
    Trapezoid trapezoid2(x4, y4);

    cout << "\nТрапеция со сторонами: " << trapezoid1.r[0] << " " << trapezoid1.r[1] << " " << trapezoid1.r[2] << " " << trapezoid1.r[3] << endl;
    cout << "S = " << trapezoid1.P() << endl;
    cout << "P = " << trapezoid1.S() << endl;

    cout << "Трапеция с координатами вершин: " <<
        "x1 = " << trapezoid2.x[0] << "; y1 = " << trapezoid2.y[0] <<
        "; x2 = " << trapezoid2.x[1] << "; y2 = " << trapezoid2.y[1] <<
        "; x3 = " << trapezoid2.x[2] << "; y3 = " << trapezoid2.y[2] <<
        "; x4 = " << trapezoid2.x[3] << "; y4 = " << trapezoid2.y[3] << endl;
    cout << "S = " << parallelogram2.Pxy() << endl;
    cout << "P = " << parallelogram2.Sxy() << endl;


    double r5 = 4;
    double x5[2] = { 3,4 };
    double y5[2] = { 3,4 };


    Star star1(r5);
    Star star2(x5, y5);

    cout << "\nЗвезда со стороной: " << star1.r << endl;
    cout << "S = " << star1.P() << endl;
    cout << "P = " << star1.S() << endl;

    cout << "Трапеция с координатами вершин: " <<
        "x1 = " << star2.x[0] << "; y1 = " << star2.y[0] <<
        "; x2 = " << star2.x[1] << "; y2 = " << star2.y[1] << endl;
    cout << "S = " << star2.Pxy() << endl;
    cout << "P = " << star2.Sxy() << endl;
}
