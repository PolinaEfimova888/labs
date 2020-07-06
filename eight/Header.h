#include <iostream>

class Figura {
public:
    virtual double P() { return 0; }
    virtual double Pxy() { return 0; }
    virtual double Sxy() { return 0; }
    virtual bool Point() { return 0; }
    virtual bool PointXY() { return 0; }

    int length(double x1, double x2, double y1, double y2) {
        return sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    }
};

class Triangle : Figura {
public:
    double r[3];
    double x[3];
    double y[3];


    Triangle(double R[3]) {
        for (int i = 0; i < 3; i++) {
            r[i] = R[i];
        }
    }


    Triangle(double X[3], double Y[3]) {
        for (int i = 0; i < 3; i++) {
            x[i] = X[i];
            y[i] = Y[i];
        }
    }


    double P() {
        return r[0] + r[1] + r[2];
    }

    double Pxy() {
        return length(x[0], x[1], y[0], y[1]) +
            length(x[1], x[2], y[1], y[2]) +
            length(x[0], x[2], y[0], y[2]);
    }

    double S() {
        return sqrt(P() / 2 * (P() / 2 - r[0]) * (P() / 2 - r[1]) * (P() / 2 - r[2]));
    }

    double Sxy() {
        return sqrt(Pxy() / 2 * (Pxy() / 2 - length(x[0], x[1], y[0], y[1])) *
            (Pxy() / 2 - length(x[0], x[1], y[0], y[1])) *
            (Pxy() / 2 - length(x[0], x[1], y[0], y[1])));
    }
};


class Rectangle : Figura {
public:
    double r[2];
    double x[3];
    double y[3];


    Rectangle(double R[2]) {
        for (int i = 0; i < 2; i++) {
            r[i] = R[i];
        }
    }


    Rectangle(double X[3], double Y[3]) {
        for (int i = 0; i < 3; i++) {
            x[i] = X[i];
            y[i] = Y[i];
        }
    }

    double P() {
        return 2 * (r[0] + r[1]);
    }

    double Pxy() {
        return 2 * (length(x[0], x[1], y[0], y[1]) +
            length(x[1], x[2], y[1], y[2]));
    }

    double S() {
        return r[0] * r[1];
    }

    double Sxy() {
        return length(x[0], x[1], y[0], y[1]) * length(x[1], x[2], y[1], y[2]);
    }
};

class Parallelogram : Figura {
public:
    double r[2];
    double a;
    double x[3];
    double y[3];



    Parallelogram(double R[2], double A) {
        for (int i = 0; i < 2; i++) {
            r[i] = R[i];
        }
        a = A;
    }


    Parallelogram(double X[3], double Y[3]) {
        for (int i = 0; i < 3; i++) {
            x[i] = X[i];
            y[i] = Y[i];
        }
    }


    double P() {
        return r[0] + r[1] + r[0] + r[1];
    }

    double Pxy() {
        return 2 * (length(x[0], x[1], y[0], y[1]) +
            length(x[1], x[2], y[1], y[2]));
    }

    double S() {
        return r[0] * r[1] * sin(a);
    }

    double Sxy() {
        return length(x[0], x[1], y[0], y[1]) *
            length(x[1], x[2], y[1], y[2]) *
            sqrt(1 - pow(((x[2] - x[0]) * (x[1] - x[0]) + (y[2] - y[0]) * (y[1] - y[0])) /
            (length(x[0], x[1], y[0], y[1]) *
                length(x[1], x[2], y[1], y[2])), 2));
    }
};

class Ñircle : Figura {
public:
    double r;
    double x[2];
    double y[2];

    Ñircle(double R) {
        r = R;
    }


    Ñircle(double X[2], double Y[2]) {
        for (int i = 0; i < 2; i++) {
            x[i] = X[i];
            y[i] = Y[i];
        }
    }


    double P() {
        return 2 * 3.14 * r;
    }

    double Pxy() {
        return 2 * length(x[0], x[1], y[0], y[1]) * 3.14;
    }

    double S() {
        return 3.14 * pow(r, 2);
    }

    double Sxy() {
        return 3.14 * pow(length(x[0], x[1], y[0], y[1]), 2);
    }
};


class Trapezoid : Figura {
public:
    double r[4];
    double x[4];
    double y[4];



    Trapezoid(double R[4]) {
        for (int i = 0; i < 4; i++) {
            r[i] = R[i];
        }
    }


    Trapezoid(double X[4], double Y[4]) {
        for (int i = 0; i < 4; i++) {
            x[i] = X[i];
            y[i] = Y[i];
        }
    }


    double P() {
        return r[0] + r[1] + r[2] + r[3];
    }

    double Pxy() {
        return length(x[0], x[1], y[0], y[1]) +
            length(x[1], x[2], y[1], y[2]) +
            length(x[2], x[3], y[2], y[3]) +
            length(x[3], x[0], y[3], y[0]);
    }

    double S() {
        return ((r[0] + r[1]) / 2) *
            sqrt(pow(r[2], 2) - pow(pow(r[1] - r[0], 2) + pow(r[2], 2) - pow(r[3], 2) /
            (2 * (r[1] - r[0])), 2));
    }

    double Sxy() {
        return ((length(x[0], x[1], y[0], y[1]) + length(x[1], x[2], y[1], y[2])) / 2) *
            sqrt(pow(length(x[2], x[3], y[2], y[3]), 2) - pow(pow(length(x[1], x[2], y[1], y[2]) - length(x[0], x[1], y[0], y[1]), 2) + pow(length(x[2], x[3], y[2], y[3]), 2) - pow(length(x[3], x[0], y[3], y[0]), 2) /
            (2 * (length(x[0], x[1], y[0], y[1]) - length(x[0], x[1], y[0], y[1]))), 2));
    }
};

class Star : Figura {
public:
    double r;
    double x[2];
    double y[2];



    Star(double R) {
        r = R;
    }


    Star(double X[2], double Y[2]) {
        for (int i = 0; i < 2; i++) {
            x[i] = X[i];
            y[i] = Y[i];
        }
    }


    double P() {
        return 10 * r;
    }

    double Pxy() {
        return 10 * length(x[0], x[1], y[0], y[1]);
    }

    double S() {
        return 5 / 2 * pow(r, 2) * sin(36) + 3 * pow(sqrt(2 * pow(r, 2) - 2 * pow(r, 2) * cos(36)), 2) * sqrt(3) / 2;
    }

    double Sxy() {
        return 5 / 2 * pow(length(x[0], x[1], y[0], y[1]), 2) * sin(36) +
            3 * pow(sqrt(2 * pow(length(x[0], x[1], y[0], y[1]), 2) -
                2 * pow(length(x[0], x[1], y[0], y[1]), 2) * cos(36)), 2) * sqrt(3) / 2;
    }
};