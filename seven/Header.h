#include <iostream>
class Function {
public:

    double x, k, a, b, x1, x2;



    Function(double X, double K, double A, double B, double X1, double X2) {
        x = X;
        k = K;
        a = A;
        b = B;
        x1 = X1;
        x2 = X2;
    }

    Function(double X, double X1, double X2) {
        x = X;
        x1 = X1;
        x2 = X2;
    }
    virtual double F() { return 0; }
    virtual double Min() { return 0; }
    virtual double Max() { return 0; }
};

class Hiperbola : public Function
{
public:
    Hiperbola(double X, double K, double A, double B, double X1, double X2) :Function(X, K, A, B, X1, X2) {
    };

    double F()
    {
        double f;
        f = k / (x + a) + b;
        return f;
    }

    double Min() {
        double min = 9999999;
        for (double i = x1; i <= x2; i += (x2 - x1) / 10) {
            Hiperbola f(i, k, a, b, x1, x2);
            if (f.F() < min)
                min = f.F();
        }
        return min;
    }

    double Max() {
        double max = -9999999;
        for (double i = x1; i <= x2; i += (x2 - x1) / 10) {
            Hiperbola f(i, k, a, b, x1, x2);
            if (f.F() > max)
                max = f.F();
        }
        return max;
    }
};


class Parabola : public Function
{
public:

    Parabola(double X, double K, double A, double B, double X1, double X2) :Function(X, K, A, B, X1, X2) {

    };

    double F()
    {
        double f;
        f = pow(k * x + a, 2) + b;
        return f;
    }

    double Min() {
        double min = 9999999;
        for (double i = x1; i <= x2; i += 0.1) {
            Parabola f(i, k, a, b, x1, x2);
            if (f.F() < min)
                min = f.F();
        }
        return min;
    }

    double Max() {
        double max = -9999999;
        for (double i = x1; i <= x2; i += 0.1) {
            Parabola f(i, k, a, b, x1, x2);
            if (f.F() > max)
                max = f.F();
        }
        return max;
    }
};


class Exponenta : public Function
{
public:

    Exponenta(double X, double K, double A, double B, double X1, double X2) :Function(X, K, A, B, X1, X2) {};

    double F()
    {
        double f;
        f = exp(k * x + a) + b;
        return f;
    }

    double Min() {
        double min = 9999999;
        for (double i = x1; i <= x2; i += 0.1) {
            Exponenta f(i, k, a, b, x1, x2);
            if (f.F() < min)
                min = f.F();
        }
        return min;
    }

    double Max() {
        double max = -9999999;
        for (double i = x1; i <= x2; i += 0.1) {
            Exponenta f(i, k, a, b, x1, x2);
            if (f.F() > max)
                max = f.F();
        }
        return max;
    }
};


class Polinom :Function {
public:
    int n;
    double c[];

    Polinom(double X, int N, double C[], double X1, double X2) : Function(X, X1, X2) {
        n = N;
        for (int i = 0; i < N; i++) {
            c[i] = C[i];
        }
    }

    double F()
    {
        double f = 0;
        for (int i = 0; i < n; i++) {
            f += pow(x, i) * c[i];
        }
        return f;
    }



    double Min() {
        double min = 9999999;
        for (double i = x1; i <= x2; i += 0.1) {
            Polinom f(i, n, c, x1, x2);
            if (f.F() < min)
                min = f.F();
        }
        return min;
    }

    double Max() {
        double max = -9999999;
        for (double i = x1; i <= x2; i += 0.1) {
            Polinom f(i, n, c, x1, x2);
            if (f.F() > max)
                max = f.F();
        }
        return max;
    }
}; 
